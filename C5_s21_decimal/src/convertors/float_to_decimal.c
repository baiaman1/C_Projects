#include "../s21_decimal.h"

int s21_from_float_to_decimal(float src, s21_decimal *dst) {
  int ret_code = 1;

  for (int i = 0; i <= 3; i++) {
    dst->bits[i] = 0;
  }
  if (src < 0) {
    src = -src;
    dst->bits[3] = 1;
    dst->bits[3] = dst->bits[3] << 31;
  }
  if (src < DEC_MAX) {
    float float_tmp = src;
    int exp = 0;
    if (src) {
      int count = 1;
      while (count != 7 && float_tmp < 1000000) {
        if (count <= 7 && float_tmp > 1) {
          count++;
        }
        float_tmp *= 10;
        exp++;
      }
    }
    while (float_tmp > 10000000) {
      float_tmp /= 10;
      exp++;
    }
    long long unsigned int result_src = round(float_tmp);
    if (fabs(src) < 1) {
      while (fabs(result_src / pow(10, exp) - src) >= (0.5 / pow(10, exp))) {
        if (result_src / pow(10, exp) > src) {
          result_src--;
        } else {
          result_src++;
        }
      }
    }
    while (result_src % 10 == 0 && exp != 0 && result_src != 0) {
      result_src /= 10;
      exp--;
    }
    if (exp <= 28 && (src / pow(10, exp)) < 1) {
      exp *= pow(2, 16);
      dst->bits[3] = dst->bits[3] ^ exp;
      exp = 0;
    }
    if (result_src * pow(10, exp) > pow(2, 64)) {
      dst->bits[2] = truncl(result_src * pow(10, exp) / pow(2, 64));
      result_src = result_src * pow(10, exp) - dst->bits[2] * pow(2, 64);
    } else {
      result_src *= pow(10, exp);
    }
    if (result_src > pow(2, 32)) {
      dst->bits[1] = truncl(result_src / pow(2, 32));
      result_src -= dst->bits[1] * pow(2, 32);
    }
    dst->bits[0] = result_src;
    ret_code = 0;
  }
  return ret_code;
}
