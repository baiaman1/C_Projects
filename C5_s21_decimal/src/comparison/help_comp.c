#include "../s21_decimal.h"

int s21_check_scale_less(s21_decimal number_1, s21_decimal number_2) {
  int res = 0;
  if (GetSign(number_1) == 1 && GetSign(number_2) == 0) {
    res = S21_TRUE;
  } else if (GetSign(number_1) == 0 && GetSign(number_2) == 1) {
    res = 2;
  }
  return res;
}

int Compare(s21_decimal number_1, s21_decimal number_2) {
  int res = 0;
  if (CheckExp(number_1) != CheckExp(number_2)) {
    ComShift(&number_1, &number_2);
  }
  if (GetSign(number_1) == 1 && GetSign(number_2) == 1) {
    for (int j = 95; j >= 0; j--) {
      if (GetBit(number_1, j) > GetBit(number_2, j)) {
        res = 1;
        break;
      } else if (GetBit(number_1, j) < GetBit(number_2, j)) {
        res = 2;
        break;
      }
    }
  } else if (GetSign(number_1) == 0 && GetSign(number_2) == 0) {
    for (int i = 95; i >= 0; i--) {
      if (GetBit(number_1, i) < GetBit(number_2, i)) {
        res = 1;
        break;
      } else if (GetBit(number_1, i) > GetBit(number_2, i)) {
        res = 2;
        break;
      }
    }
  } else {
    res = s21_check_scale_less(number_1, number_2);
  }
  return res;
}

int CompareExt(s21_big_decimal number_1, s21_big_decimal number_2) {
  int res = 0;
  if (CheckExpExt(number_1) != CheckExpExt(number_2)) {
    ShiftComExt(&number_1, &number_2);
  }
  if (GetSignExt(number_1) == 1 && GetSignExt(number_2) == 1) {
    for (int j = 191; j >= 0; j--) {
      if (GetBitExt(number_1, j) > GetBitExt(number_2, j)) {
        res = 1;
        break;
      } else if (GetBitExt(number_1, j) < GetBitExt(number_2, j)) {
        res = 2;
        break;
      }
    }
  } else if (GetSignExt(number_1) == 0 && GetSignExt(number_2) == 0) {
    for (int i = 191; i >= 0; i--) {
      if (GetBitExt(number_1, i) < GetBitExt(number_2, i)) {
        res = 1;
        break;
      } else if (GetBitExt(number_1, i) > GetBitExt(number_2, i)) {
        res = 2;
        break;
      }
    }
  }
  return res;
}