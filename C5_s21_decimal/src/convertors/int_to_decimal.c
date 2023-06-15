#include "../s21_decimal.h"

int s21_from_int_to_decimal(int src, s21_decimal *dst) {
  int ret_code = 0;
  for (int i = 0; i <= 3; i++) {
    dst->bits[i] = 0;
  }
  if (src < 0) {
    src = -src;
    dst->bits[3] = 1;
    dst->bits[3] = dst->bits[3] << 31;
  }
  dst->bits[0] = src;
  if (dst->bits[0] != (unsigned int)src) {
    ret_code = 1;
  }
  return ret_code;
}