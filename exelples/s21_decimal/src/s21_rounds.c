#include "s21_decimal.h"

int s21_truncate(s21_decimal value, s21_decimal *result) {
    initialize(result);
    info inf_val = {0};
    s21_decimal pow = {{10, 0, 0, 0}};
    get_exp(&inf_val, &value);
    value.bits[scale] = 0;

    if (inf_val.exponent > 28) {
        return CONVERT_ERROR;
    }
    if (!inf_val.exponent) {
        *result = value;
    } else {
        while (inf_val.exponent) {
            s21_div(value, pow, result);
            value = *result;
            inf_val.exponent--;
        }
    }
    set_info(result, inf_val.sign, 0);
    return OK;
}

int s21_negate(s21_decimal value, s21_decimal *result) {
    info getinfo = {0};
    initialize(result);

    get_exp(&getinfo, &value);
    result->bits[0] = value.bits[0];
    result->bits[1] = value.bits[1];
    result->bits[2] = value.bits[2];
    if (getinfo.sign == 1)
        set_info(result, 0, getinfo.exponent);
    else
        set_info(result, 1, getinfo.exponent);

    return 0;
}

int s21_floor(s21_decimal value, s21_decimal *result) {
    initialize(result);
    info ssign = {0};
    get_exp(&ssign, &value);
    if (ssign.sign == 1) {
        s21_negate(value, &value);
    }
    s21_truncate(value, result);
    s21_decimal one = {{1, 0, 0, 0}};
    if (ssign.sign == 1) {
        s21_add(*result, one, result);
    }
    set_exp(result, 0);
    if (ssign.sign == 1) {
        s21_negate(*result, result);
    }
    return 0;
}


int s21_round(s21_decimal value, s21_decimal *result) {
    s21_decimal ostatok = {{5, 0, 0, 0}};
    s21_decimal mod_res = {0};
    s21_decimal one = {{1, 0, 0, 0}};
    initialize(result);
    info ssign = {0};
    get_exp(&ssign, &value);
    if (ssign.sign == 1) {
        s21_negate(value, &value);
    }
    s21_truncate(value, result);
    s21_decimal for_mod = {{pow(10, ssign.exponent), 0, 0, 0}};
    s21_mod(value, for_mod, &mod_res);
    set_exp(&ostatok, 1);
    if (s21_is_less_or_equal(ostatok, mod_res)) {
        s21_add(*result, one, result);
    }
    info res = {0};
    get_exp(&res, result);
    res.exponent = 0;
    set_exp(result, res.exponent);
    if (ssign.sign) {
        s21_negate(*result, result);
    }
    return 0;
}

void s21_bank_round(s21_decimal value, s21_decimal *result) {
    s21_decimal ostatok = {{5, 0, 0, 0}};
    s21_decimal mod_res = {0};
    s21_decimal one = {{1, 0, 0, 0}};
    initialize(result);
    info ssign = {0};
    get_exp(&ssign, &value);
    if (ssign.sign == 1) {
        s21_negate(value, &value);
    }
    s21_truncate(value, result);
    s21_decimal for_mod = {{pow(10, ssign.exponent), 0, 0, 0}};
    s21_mod(value, for_mod, &mod_res);
    unsigned int tmp = mod_res.bits[0], k = 0;
    set_exp(&ostatok, ssign.exponent);
    while (tmp != 0) {
        k += 1;
        tmp /= 10;
    }
    s21_decimal for_mul = {{pow(10, k - 1), 0, 0, 0}};
    s21_mul(for_mul, ostatok, &ostatok);
    if (s21_is_less(ostatok, mod_res)) {
        s21_add(*result, one, result);
    }
    info res = {0};
    get_exp(&res, result);
    res.exponent = 0;
    set_exp(result, res.exponent);
    if (ssign.sign) {
        s21_negate(*result, result);
    }
}
