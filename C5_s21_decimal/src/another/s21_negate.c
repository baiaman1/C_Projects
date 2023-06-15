#include "../s21_decimal.h"

int s21_negate(s21_decimal value, s21_decimal *result) {
  if (result == NULL) {
    return 1;
  }
  int error = 0;
  // if negative
  if (value.bits[3] & 0x80000000) {
    value.bits[3] = value.bits[3] & 0x7FFFFFFF;
  }
  // if positive
  else {
    value.bits[3] = value.bits[3] | 0x80000000;
  }
  for (int i = 0; i < 4; i++) {
    result->bits[i] = value.bits[i];
  }
  return error;
}