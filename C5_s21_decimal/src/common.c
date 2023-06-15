#include "s21_decimal.h"

int GetBit(s21_decimal value, int bit) {
  int res;
  int i = bit / 32;
  res = (value.bits[i] >> (bit - i * 32)) & 1;
  return res;
}

int GetSign(s21_decimal value) { return (value.bits[3] >> 31) & 1; }

int CheckExp(s21_decimal value) { return (value.bits[3] >> 16) & 255; }

int SetScale(int pow, int sign) { return (pow << 16) ^ (sign << 31); }

void InitialiseNumber(s21_decimal *value) {
  for (int i = 0; i < 4; i++) {
    value->bits[i] = 0;
  }
}

s21_decimal InvertSign(s21_decimal value) {
  value.bits[3] ^= (1 << 31);
  return value;
}

s21_decimal Module(s21_decimal value) {
  s21_decimal res = value;
  res.bits[3] = SetScale(CheckExp(value), 0);
  return res;
}

int Mul10(s21_decimal *value) {
  int error = 0;
  s21_decimal v1 = *value, v2 = *value, res = {{0, 0, 0, 0}};
  if (((value->bits[2] >> 29) & 7) == 0) {
    ShiftDecimal(&v1, 3);
    ShiftDecimal(&v2, 1);
    error = s21_add(v1, v2, &res);
  } else {
    error = 1;
  }
  if (error == 0) {
    res.bits[3] = SetScale(CheckExp(*value) + 1, GetSign(*value));
    *value = res;
  }
  return error;
}

s21_decimal RoundAftComma(s21_decimal value, int p) {
  s21_decimal res = value;
  res.bits[3] = SetScale(CheckExp(value) - p, GetSign(value));
  s21_bank_rounding(res, &res);
  res.bits[3] = SetScale(p, GetSign(value));
  return res;
}

void ComShift(s21_decimal *value_1, s21_decimal *value_2) {
  int p = abs(CheckExp(*value_1) - CheckExp(*value_2));
  int error = 0;
  while (p > 0) {
    if (CheckExp(*value_1) > CheckExp(*value_2)) {
      error = Mul10(value_2);
    } else if (CheckExp(*value_1) < CheckExp(*value_2)) {
      error = Mul10(value_1);
    }
    if (error == 0) {
      p--;
    } else {
      break;
    }
  }
  if (p > 0) {
    if ((CheckExp(*value_1) > CheckExp(*value_2))) {
      *value_1 = RoundAftComma(*value_1, CheckExp(*value_2));
    } else {
      *value_2 = RoundAftComma(*value_2, CheckExp(*value_1));
    }
  }
}

int OccupBitsNum(s21_decimal value) {
  int j;
  for (j = 95; j >= 0; j--) {
    int i = j / 32;
    int k = j - i * 32;
    if ((value.bits[i] >> k) & 1) {
      break;
    }
  }
  return j + 1;
}

int ShiftDecimal(s21_decimal *value, int j) {
  int res = 1;
  if (j <= 96 - OccupBitsNum(*value)) {
    for (int k = 0; k < j; k++) {
      int temp = 0;
      for (int i = 0; i < 3; i++) {
        if (temp) {
          temp = value->bits[i] >> 31;
          value->bits[i] = ((value->bits[i] & ~(1 << 31)) << 1) ^ 1;
        } else {
          temp = value->bits[i] >> 31;
          value->bits[i] = (value->bits[i] & ~(1 << 31)) << 1;
        }
      }
    }
  } else {
    res = 0;
  }
  return res;
}

s21_big_decimal ExtendDecimal(s21_decimal value) {
  s21_big_decimal res;
  InitialiseExtNumber(&res);
  for (int i = 0; i < 3; i++) {
    res.bits[i] = value.bits[i];
  }
  res.bits[6] = value.bits[3];
  return res;
}

int ShortenExtDecimal(s21_big_decimal value1, s21_decimal *value2) {
  int error = 1;
  s21_big_decimal v1;
  InitialiseExtNumber(&v1);
  int exp = CheckExpExt(value1);
  for (int p = exp; p >= 0; p--) {
    v1 = RoundAftCommaExt(value1, p);
    if (CheckExtPart(v1) == 0 && CheckExpExt(v1) < 29) {
      for (int i = 0; i < 3; i++) {
        value2->bits[i] = v1.bits[i];
      }
      value2->bits[3] = v1.bits[6];
      error = 0;
      break;
    }
  }
  return error;
}

int CheckExtPart(s21_big_decimal value) {
  return (value.bits[3] == 0 && value.bits[4] == 0 && value.bits[5] == 0) ? 0
                                                                          : 1;
}

int GetBitExt(s21_big_decimal value, int bit) {
  int res;
  int i = bit / 32;
  res = (value.bits[i] >> (bit - i * 32)) & 1;
  return res;
}

int GetSignExt(s21_big_decimal value) { return (value.bits[6] >> 31) & 1; }

int CheckExpExt(s21_big_decimal value) { return (value.bits[6] >> 16) & 255; }

void InitialiseExtNumber(s21_big_decimal *value) {
  for (int i = 0; i < 7; i++) {
    value->bits[i] = 0;
  }
}

int Mul10Ext(s21_big_decimal *value) {
  int error = 0;
  s21_big_decimal v1 = *value, v2 = *value, res = {{0, 0, 0, 0, 0, 0, 0}};
  if (((value->bits[5] >> 29) & 7) == 0) {
    ShiftBitExt(&v1, 3);
    ShiftBitExt(&v2, 1);
    error = AddAlgo(v1, v2, &res);
  } else {
    error = 1;
  }
  if (error == 0) {
    res.bits[6] = SetScale(CheckExpExt(*value) + 1, GetSignExt(*value));
    *value = res;
  }
  return error;
}

s21_big_decimal RoundAftCommaExt(s21_big_decimal value, int p) {
  s21_big_decimal res = value;
  res.bits[6] = SetScale(CheckExpExt(value) - p, GetSignExt(value));
  s21_banking_round_big(res, &res);
  res.bits[6] = SetScale(p, GetSignExt(value));
  return res;
}

void ShiftComExt(s21_big_decimal *value_1, s21_big_decimal *value_2) {
  int p = abs(CheckExpExt(*value_1) - CheckExpExt(*value_2));
  int error = 0;
  while (p > 0) {
    if (CheckExpExt(*value_1) > CheckExpExt(*value_2)) {
      error = Mul10Ext(value_2);
    } else if (CheckExpExt(*value_1) < CheckExpExt(*value_2)) {
      error = Mul10Ext(value_1);
    }
    if (error == 0) {
      p--;
    } else {
      break;
    }
  }
}

int OccupBitsNumExt(s21_big_decimal value) {
  int j;
  for (j = 191; j >= 0; j--) {
    int i = j / 32;
    int k = j - i * 32;
    if ((value.bits[i] >> k) & 1) {
      break;
    }
  }
  return j + 1;
}

int ShiftBitExt(s21_big_decimal *value, int j) {
  int res = 1;
  if (j <= 192 - OccupBitsNumExt(*value)) {
    for (int k = 0; k < j; k++) {
      int temp = 0;
      for (int i = 0; i < 6; i++) {
        if (temp) {
          temp = value->bits[i] >> 31;
          value->bits[i] = ((value->bits[i] & ~(1 << 31)) << 1) ^ 1;
        } else {
          temp = value->bits[i] >> 31;
          value->bits[i] = (value->bits[i] & ~(1 << 31)) << 1;
        }
      }
    }
  } else {
    res = 0;
  }
  return res;
}

int MulExtDec10(s21_big_decimal *value) {
  int error = 0;
  s21_big_decimal v1 = *value, v2 = *value, res = {{0, 0, 0, 0, 0, 0, 0}};
  if (((value->bits[5] >> 29) & 7) == 0) {
    ShiftBitExt(&v1, 3);
    ShiftBitExt(&v2, 1);
    error = AddAlgo(v1, v2, &res);
  } else {
    error = 1;
  }
  if (error == 0) {
    res.bits[6] = SetScale(CheckExpExt(*value), GetSignExt(*value));
    *value = res;
  }
  return error;
}
