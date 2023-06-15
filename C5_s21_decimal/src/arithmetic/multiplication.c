#include "../s21_decimal.h"

int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  // 0 - OK
  // 1 - the number is too large or equal to infinity
  // 2 - the number is too small or equal to negative infinity
  int output_code = 0;
  int sign = GetSign(value_1) ^ GetSign(value_2);
  s21_big_decimal v1 = ExtendDecimal(value_1);
  s21_big_decimal v2 = ExtendDecimal(value_2);
  s21_big_decimal res = {{0, 0, 0, 0, 0, 0, 0}};
  MultAlgo(v1, v2, &res);
  // Overflow check
  output_code = ShortenExtDecimal(res, result);
  if (output_code != 0) {
    output_code = sign ? MINUS_INF_OR_TOO_SMALL : INF_OR_TOO_BIG;
  }
  return output_code;
}

// Multiplication algorithm
void MultAlgo(s21_big_decimal value_1, s21_big_decimal value_2,
              s21_big_decimal *result) {
  InitialiseExtNumber(result);
  s21_big_decimal temp_res;
  InitialiseExtNumber(&temp_res);
  int exp = CheckExpExt(value_1) + CheckExpExt(value_2);
  int sign = GetSignExt(value_1) ^ GetSignExt(value_2);
  value_1.bits[6] = 0;
  value_2.bits[6] = 0;
  // Multiplication by bar
  for (int j = 0; j < OccupBitsNumExt(value_2); j++) {
    if (GetBitExt(value_2, j)) {
      temp_res = value_1;
      ShiftBitExt(&temp_res, j);
      AddAlgo(*result, temp_res, result);
    }
  }
  result->bits[6] = SetScale(exp, sign);
}
