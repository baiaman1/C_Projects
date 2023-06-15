#include "../s21_decimal.h"

int s21_truncate(s21_decimal value, s21_decimal *result) {
  InitialiseNumber(result);
  int res = 0;
  int scale = CheckExp(value);
  int sign = GetSign(value);
  if (!result) res = 1;
  if (result != NULL) {
    *result = value;
    result->bits[3] = SetScale(0, sign);
  }
  if (scale) {
    for (int i = scale; i > 0; i--) {
      Div10(*result, result);
    }
  }
  return res;
}

int s21_truncate_big(s21_big_decimal value, s21_big_decimal *result) {
  InitialiseExtNumber(result);
  int res = 0;
  int scale = CheckExpExt(value);
  int sign = GetSignExt(value);
  if (!result) {
    res = 1;
  }
  if (result != NULL) {
    *result = value;
    result->bits[6] = SetScale(0, sign);
  }
  if (scale) {
    for (int i = scale; i > 0; i--) {
      Div10Ext(*result, result);
    }
  }
  return res;
}