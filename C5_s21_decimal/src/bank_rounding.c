#include "s21_decimal.h"

int s21_bank_rounding(s21_decimal value, s21_decimal *result) {
  int return_value = 0;
  InitialiseNumber(result);
  if (!result) return_value = 1;
  int sign = GetSign(value);
  int scale = CheckExp(value);
  SetScaleSign(&value, scale, 0);
  s21_decimal tmp = {0};
  s21_truncate(value, &tmp);
  s21_decimal tmp_1 = tmp;
  s21_sub(value, tmp, &tmp);

  s21_decimal one = {{1, 0, 0, 0}};
  s21_decimal half = {{5, 0, 0, SetScale(1, 0)}};
  if (scale) {
    TmpUpgrade(&tmp);
    if (s21_is_less(tmp, half)) {
      *result = tmp_1;
    } else if (s21_is_greater(tmp, half)) {
      return_value = s21_add(tmp_1, one, result);
    } else if (s21_is_equal(tmp, half)) {
      if (IsEven(tmp_1)) {
        *result = tmp_1;
      } else {
        return_value = s21_add(tmp_1, one, result);
      }
    }
  } else {
    *result = value;
  }
  if (sign) SetScaleSign(result, 0, 1);
  SetScaleSign(&value, scale, sign);
  return return_value;
}

int IsEven(s21_decimal value) {
  s21_decimal two = {{2, 0, 0, 0}};
  s21_decimal res = {0};
  int return_value = 0;
  s21_div(value, two, &res);
  int l = CheckExp(res);
  if (l == 0) return_value = 1;
  return return_value;
}

void TmpUpgrade(s21_decimal *value) {
  value->bits[3] = SetScale((CheckExp(*value) - 1), 0);
  s21_truncate(*value, value);
  value->bits[3] = SetScale(1, 0);
}

int s21_banking_round_big(s21_big_decimal value, s21_big_decimal *result) {
  int return_value = 0;
  InitialiseExtNumber(result);
  if (!result) return_value = 1;
  int sign = GetSignExt(value);
  int scale = CheckExpExt(value);
  SetScaleSignExt(&value, scale, 0);
  s21_big_decimal tmp = {0};
  s21_truncate_big(value, &tmp);
  s21_big_decimal tmp_1 = tmp;
  SubAlgo(value, tmp, &tmp);

  s21_big_decimal one = {{1, 0, 0, 0, 0, 0, 0}};
  s21_big_decimal half = {{5, 0, 0, 0, 0, 0, SetScale(1, 0)}};
  if (scale) {
    TmpUpgradeExt(&tmp);
    if (s21_is_less_big(tmp, half)) {
      *result = tmp_1;
    } else if (s21_is_greater_big(tmp, half)) {
      return_value = AddAlgo(tmp_1, one, result);
    } else if (s21_is_equal_big(tmp, half)) {
      if (IsEvenExt(tmp_1)) {
        *result = tmp_1;
      } else {
        return_value = AddAlgo(tmp_1, one, result);
      }
    }
  } else {
    *result = value;
  }
  if (sign) SetScaleSignExt(result, 0, 1);
  SetScaleSignExt(&value, scale, sign);
  return return_value;
}

int IsEvenExt(s21_big_decimal value) {
  s21_decimal two = {{2, 0, 0, 0}};
  s21_big_decimal res = {0};
  int return_value = 0;
  DivAlgo(value, two, &res);
  int l = CheckExpExt(res);
  if (l == 0) return_value = 1;
  return return_value;
}

void TmpUpgradeExt(s21_big_decimal *value) {
  value->bits[6] = SetScale((CheckExpExt(*value) - 1), 0);
  s21_truncate_big(*value, value);
  value->bits[6] = SetScale(1, 0);
}
