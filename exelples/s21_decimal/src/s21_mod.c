#include "s21_decimal.h"

int s21_mod(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
    if (value_2.bits[low] == 0 && value_2.bits[mid] == 0 && value_2.bits[top] == 0)
        return DIV_BY_ZERO;
    initialize(result);
    s21_div(value_1, value_2, result);
    s21_mul(*result, value_2, result);
    s21_sub(value_1, *result, result);
    return OK;
}
