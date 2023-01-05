#include "s21_decimal.h"

int both_zeroes(s21_decimal value_1, s21_decimal value_2) {
    if (value_1.bits[0] == 0 && value_1.bits[1] == 0 && value_1.bits[2] == 0 \
    && value_2.bits[0] == 0 && value_2.bits[1] == 0 && value_2.bits[2] == 0) {
        return 1;
    } else {
        return 0;
    }
}

int s21_is_equal(s21_decimal value_1, s21_decimal value_2) {
    if (both_zeroes(value_1, value_2))
        return 1;
    info getinfo_1 = {0};
    info getinfo_2 = {0};
    get_exp(&getinfo_1, &value_1);
    get_exp(&getinfo_2, &value_2);
    if (getinfo_1.sign != getinfo_2.sign)
        return COMPAR_FALSE;
    equal_exp(getinfo_1.exponent, getinfo_2.exponent, &value_1, &value_2);
    if (bits_eq(value_1.bits, value_2.bits)) {
        return COMPAR_TRUE;
    } else {
        return COMPAR_FALSE;
    }
}

int s21_is_less(s21_decimal value_1, s21_decimal value_2) {
    if (both_zeroes(value_1, value_2))
        return 0;
    if ((s21_is_less_abs(value_1, value_2) == 1) && \
    (get_bit_nums(value_1.bits[scale], 31) == 1) && (get_bit_nums(value_2.bits[scale], 31) == 1))
        return 0;
    else if ((s21_is_less_abs(value_1, value_2) == 0) && \
    (get_bit_nums(value_1.bits[scale], 31) == 1) && (get_bit_nums(value_2.bits[scale], 31) == 1))
        return 1;
    else
        return s21_is_less_abs(value_1, value_2);
}

int s21_is_less_abs(s21_decimal value_1, s21_decimal value_2) {
    int i = 95;
    info getinfo_1 = {0};
    info getinfo_2 = {0};
    get_exp(&getinfo_1, &value_1);
    get_exp(&getinfo_2, &value_2);
    int res = 0;
    int n = 0;
    int m = 0;

    if (getinfo_2.sign > getinfo_1.sign) {
        res = 0;
    } else if (getinfo_1.sign > getinfo_2.sign) {
        res = 1;
    } else {
        equal_exp(getinfo_1.exponent, getinfo_2.exponent, &value_1, &value_2);
        while (i > -1) {
            n = get_bit(value_1, i);
            m = get_bit(value_2, i);
            if (n == 0 && m == 1) {
                res = 1;
                break;
            }
            if (n == 1 && m == 0) {
                res = 0;
                break;
            }
            i--;
        }
    }
    return res;
}

int s21_is_greater(s21_decimal value_1, s21_decimal value_2) {
    if (both_zeroes(value_1, value_2))
        return 0;
    else
        return s21_is_less(value_2, value_1);
}

int s21_is_greater_or_equal(s21_decimal value_1, s21_decimal value_2) {
    return s21_is_greater(value_1, value_2) || s21_is_equal(value_1, value_2);
}

int s21_is_less_or_equal(s21_decimal value_1, s21_decimal value_2) {
    return s21_is_less(value_1, value_2) || s21_is_equal(value_1, value_2);
}

int s21_is_not_equal(s21_decimal value_1, s21_decimal value_2) {
    if (s21_is_equal(value_1, value_2) == 1)
        return 0;
    else
        return 1;
}
