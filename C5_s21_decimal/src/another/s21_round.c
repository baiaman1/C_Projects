#include "../s21_decimal.h"

int s21_round(s21_decimal value, s21_decimal *result) {
  InitialiseNumber(result);
  int return_value = 0;
  if (!result) {
    return_value = 1;
  }
  int sign = GetSign(value);
  int scale = CheckExp(value);
  SetScaleSign(&value, scale, 0);
  s21_decimal tmp;
  InitialiseNumber(&tmp);
  s21_truncate(value, &tmp);
  s21_decimal tmp_1 = tmp;
  s21_sub(value, tmp, &tmp);
  s21_decimal half = {{5, 0, 0, SetScale(1, 0)}};
  s21_decimal one = {{1, 0, 0, 0}};
  if (!s21_is_greater_or_equal(tmp, half)) {
    *result = tmp_1;
  } else {
    return_value = s21_add(tmp_1, one, result);
  }
  if (sign) {
    SetScaleSign(result, 0, 1);
  }
  SetScaleSign(&value, scale, sign);
  return return_value;
}

void SetScaleSign(s21_decimal *value, int scale, int sign) {
  value->bits[3] = SetScale(scale, sign);
}

void SetScaleSignExt(s21_big_decimal *value, int scale, int sign) {
  value->bits[6] = SetScale(scale, sign);
}