#include "../s21_decimal.h"

int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  // 0 - OK
  // 1 - the number is too large or equal to infinity
  // 2 - the number is too small or equal to negative infinity
  int output_code = 0;
  if (GetSign(value_1) == GetSign(value_2)) {
    // Case of similar signs - subtraction
    InitialiseNumber(result);
    if (s21_is_greater_or_equal(Module(value_1), Module(value_2))) {
      // result has the same sign as value1, making + signs for values
      int sign = GetSign(value_1);
      value_1 = GetSign(value_1) ? InvertSign(value_1) : value_1;
      value_2 = GetSign(value_2) ? InvertSign(value_2) : value_2;
      // Calculating
      s21_big_decimal v1 = ExtendDecimal(value_1);
      s21_big_decimal v2 = ExtendDecimal(value_2);
      s21_big_decimal res;
      SubAlgo(v1, v2, &res);
      res.bits[6] = SetScale(CheckExpExt(res), sign);
      // Overflow check
      output_code = ShortenExtDecimal(res, result);
      if (output_code != 0) {
        output_code = GetSignExt(res) ? MINUS_INF_OR_TOO_SMALL : INF_OR_TOO_BIG;
      }
    } else {
      // result will have the oppisite sign with value1 since value2 is greater
      output_code = s21_sub(value_2, value_1, result);
      *result = InvertSign(*result);
    }
  } else {
    // Case of different signs - addition
    value_2 = InvertSign(value_2);
    output_code = s21_add(value_1, value_2, result);
  }
  return output_code;
}

// Subtraction Algorithm
int SubAlgo(s21_big_decimal value_1, s21_big_decimal value_2,
            s21_big_decimal *result) {
  int output_code = 0;
  InitialiseExtNumber(result);
  ShiftComExt(&value_1, &value_2);
  // Subtraction for positive nums, val1 > val2
  result->bits[6] = SetScale(CheckExpExt(value_1), GetSignExt(value_1));
  for (int j = 0; j < 192; j++) {
    int i = j / 32;
    // Substraction for one bit
    int temp_res = ((value_1.bits[i] >> (j - i * 32)) ^
                    (value_2.bits[i] >> (j - i * 32))) &
                   1;
    if (temp_res && !(value_1.bits[i] >> (j - i * 32) & 1)) {
      GetDigit(&value_1, j);
    }
    result->bits[i] = result->bits[i] ^ (temp_res << (j - i * 32));
  }
  return output_code;
}

// Getting a bit of extended decimal
void GetDigit(s21_big_decimal *value, int j) {
  j++;
  int i = j / 32;
  while (j < 192 && !((value->bits[i] >> (j - i * 32)) & 1)) {
    value->bits[i] ^= 1 << (j - i * 32);
    j++;
    i = j / 32;
  }
  value->bits[i] &= ~(1 << (j - i * 32));
}