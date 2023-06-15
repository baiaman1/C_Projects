#include "../s21_decimal.h"

int s21_from_decimal_to_float(s21_decimal src, float *dst) {
  int ret_code = 1, sign = 0, exp = 0;
  long double decimal = 0;
  *dst = 0;

  decimal = src.bits[2] * pow(2, 64);
  decimal += src.bits[1] * pow(2, 32);
  decimal += src.bits[0];
  if (src.bits[3] >> 31 == 1) {
    sign = 1;
    src.bits[3] = src.bits[3] ^ SIGN_MINUS;
  }
  exp = src.bits[3] >> 16;
  if (exp <= 28) {
    decimal /= pow(10, exp);
    if (sign == 1) {
      decimal = -decimal;
    }
    *dst = decimal;
    ret_code = 0;
  } else {
    *dst = 0;
  }
  return ret_code;
}