#include "s21_decimal.h"

void get_exp(info *bits, s21_decimal *src) {
    int j = 0;
    for (int i = 16; i <= 23; i++) {
        set_bit_nums((unsigned*)&bits->exponent, get_bit_nums(src->bits[3] , i), j);
        j++;
    }
    bits->sign = ((src->bits[3] >> 31) & 1);
}


void set_sign(s21_decimal *result, int flag) {
    if (flag == 1) {
        set_bit_nums(&result->bits[scale], 1, 31);
    } else {
        set_bit_nums(&result->bits[scale], 0, 31);
    }
}

bool get_sign(s21_decimal decimal) {
    return ((decimal.bits[3] >> 31) & 1);
}

int get_bit(s21_decimal num, int pos) {
    int result = (num.bits[pos / 32] >> (pos % 32)) & 1;
    return result;
}


void set_bit(s21_decimal *val, int bit, int pos) {
    if (bit != 0) {
        val->bits[pos/32] = val->bits[pos/32] | (bit << pos);
    } else if (bit == 0) {
        val->bits[pos/32] = val->bits[pos/32] & ~((bit + 1) << pos);
    }
}

int get_bit_nums(unsigned int num, int pos) {
    int result = (num >> (pos % 32)) & 1;
    return result;
}

void set_bit_nums(unsigned int *val, int bit, int pos) {
    if (bit != 0 && get_bit_nums(*val, pos) == 0) {
        *val = *val | (bit << pos);
    } else if (bit == 0 && get_bit_nums(*val, pos) == 1) {
        *val = *val & ~((bit + 1) << pos);
    }
}

bool bits_eq(const unsigned bits_a[4], const unsigned bits_b[4]) {
    return bits_a[low] == bits_b[low] && bits_a[mid] == bits_b[mid] &&
           bits_a[top] == bits_b[top] && bits_a[scale] == bits_b[scale];
}

void swap(s21_decimal* val_1, s21_decimal* val_2) {
    s21_decimal x = {0};
    x = *val_1;
    *val_1 = *val_2;
    *val_2 = x;
}

void shift_left(s21_decimal *val) {
    int bit_1 = 0;
    int bit_2 = 0;
    if (get_bit_nums(val->bits[low], 31) == 1) bit_1 = 1;
    if (get_bit_nums(val->bits[mid], 31) == 1) bit_2 = 1;
    val->bits[low] <<= 1;
    val->bits[mid] <<= 1;
    val->bits[top] <<= 1;
    if (bit_1 == 1) set_bit_nums(&val->bits[mid], 1, 0);
    if (bit_2 == 1) set_bit_nums(&val->bits[top], 1, 0);
}

void shift_right(s21_decimal *val) {
    int bit_1 = 0;
    int bit_2 = 0;
    if (get_bit_nums(val->bits[mid], 0) == 1) bit_1 = 1;
    if (get_bit_nums(val->bits[top], 0) == 1) bit_2 = 1;
    val->bits[low] >>= 1;
    val->bits[mid] >>= 1;
    val->bits[top] >>= 1;
    if (bit_1 == 1) set_bit_nums(&val->bits[low], 1, 31);
    if (bit_2 == 1) set_bit_nums(&val->bits[mid], 1, 31);
}

void initialize(s21_decimal *result) {
    result->bits[low] = 0;
    result->bits[mid] = 0;
    result->bits[top] = 0;
    result->bits[scale] = 0;
}

int pre_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
    initialize(result);
    int flag = 0;
    int i = 0;
    int n = get_bit(value_1, i);
    int m = get_bit(value_2, i);
    int res = n ^ m;

    if (n == 1 && m == 1)
        flag = 1;
    set_bit(result, res, i);
    i++;

    while (i < 96) {
        n = get_bit(value_1, i);
        m = get_bit(value_2, i);
        res = n ^ m;
        if (res == 1 && flag == 1) {
            res = res ^ flag;
        } else if (flag == 1) {
            res = res ^ flag;
            flag = 0;
        }
        if (n == 1 && m == 1)
            flag = 1;
        set_bit(result, res, i);
        i++;
    }
    return flag;
}

int pre_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
    int res = OK;
    int i = 0;
    while (i < 96) {
        int a = get_bit(value_1, i);
        int b = get_bit(value_2, i);
        if (b && !a) {
            int j;
            for (j = i + 1; !get_bit(value_1, j) && j < 96;) j++;
            set_bit_nums(&value_1.bits[j/32], low, j);
            j--;
            while (j != i) {
                set_bit_nums(&value_1.bits[j/32], mid, j);
                j--;
            }
            set_bit_nums(&result->bits[i/32], mid, i);
        } else {
            set_bit_nums(&result->bits[i/32], a^b, i);
        }
        i++;
    }
    return res;
}

int mul10(s21_decimal* value_1, int exp) {
    s21_decimal ten = {0};
    if (value_1->bits[top] >= 429496730) {
        return TOO_LARGE_OR_INF;
    }
    ten.bits[low] = 10;
    while (exp > 0) {
        s21_mul(ten, *value_1, value_1);
        exp--;
    }
    return OK;
}

void set_info(s21_decimal *result, int sign, int exp) {
    int i = 16;
    int k = 0;
    set_bit_nums(&result->bits[scale], sign, 31);
    while (i < 23) {
        set_bit_nums(&result->bits[scale], get_bit_nums(exp, k), i);
        i++;
        k++;
    }
}

void set_exp(s21_decimal *result, int exp) {
    int i = 16;
    int k = 0;
    while (i < 23) {
        set_bit_nums(&result->bits[scale], get_bit_nums(exp, k), i);
        i++;
        k++;
    }
}
