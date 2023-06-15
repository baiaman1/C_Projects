#include "../s21_decimal.h"

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  // 0 - OK
  // 1 - the number is too large or equal to infinity
  // 2 - the number is too small or equal to negative infinity
  int output_code = OK_CODE;
  if (GetSign(value_1) == GetSign(value_2)) {
    // Case of similar signs - addition
    s21_big_decimal term1 = ExtendDecimal(value_1);
    s21_big_decimal term2 = ExtendDecimal(value_2);
    s21_big_decimal sum = {{0, 0, 0, 0, 0, 0, 0}};
    AddAlgo(term1, term2, &sum);
    // Overflow check
    output_code = ShortenExtDecimal(sum, result);
    if (output_code != 0) {
      output_code = GetSign(value_1) ? MINUS_INF_OR_TOO_SMALL : INF_OR_TOO_BIG;
    }
  } else {
    // Case of diffirent signs - substraction
    if (GetSign(value_2)) {
      output_code = s21_sub(value_1, InvertSign(value_2), result);
    } else {
      s21_sub(value_2, InvertSign(value_1), result);
    }
  }
  return output_code;
}

// Adding Algorithm
int AddAlgo(s21_big_decimal value_1, s21_big_decimal value_2,
            s21_big_decimal *result) {
  int chng_pos = 0;  // Enables changing position
  InitialiseExtNumber(result);
  ShiftComExt(&value_1, &value_2);

  result->bits[6] = SetScale(CheckExpExt(value_1), GetSignExt(value_1));
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 32; j++) {
      // Sum for one bit
      int temp_res = ((value_1.bits[i] >> j) ^ (value_2.bits[i] >> j)) & 1;
      temp_res ^= chng_pos;  // change position if needed
      if (!chng_pos) {       // cases when the position change is needed
        if (((temp_res & 1) == 0) && (((value_1.bits[i] >> j) & 1) == 1)) {
          chng_pos = 1;
        }
      } else if ((((value_1.bits[i] >> j) & 1) == 1) ||
                 (((value_2.bits[i] >> j) & 1) == 1)) {
        chng_pos = 1;
      } else {
        chng_pos = 0;
      }
      result->bits[i] = result->bits[i] ^ (temp_res << j);
    }
  }
  return chng_pos;
}
