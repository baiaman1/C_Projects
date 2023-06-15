#include "s21_decimal_tests.h"

START_TEST(negate1) {
  s21_decimal x = {{1, 0, 0, SetScale(0, 0)}};
  s21_decimal y = {{1, 0, 0, SetScale(0, 1)}};
  s21_decimal res;
  int i = s21_negate(x, &res);
  ck_assert_int_eq(i, 0);
  for (int j = 0; j < 4; j++) {
    ck_assert_int_eq(res.bits[j], y.bits[j]);
  }
}
END_TEST

START_TEST(negate2) {
  s21_decimal x = {{100, 0, 0, SetScale(0, 0)}};
  s21_decimal y = {{100, 0, 0, SetScale(0, 1)}};
  s21_decimal res;
  int i = s21_negate(x, &res);
  ck_assert_int_eq(i, 0);
  for (int j = 0; j < 4; j++) {
    ck_assert_int_eq(res.bits[j], y.bits[j]);
  }
}
END_TEST

START_TEST(negate3) {
  s21_decimal x = {{4294967295, 4294967295, 4294967295, SetScale(0, 0)}};
  s21_decimal y = {{4294967295, 4294967295, 4294967295, SetScale(0, 1)}};
  s21_decimal res;
  int i = s21_negate(x, &res);
  ck_assert_int_eq(i, 0);
  for (int j = 0; j < 4; j++) {
    ck_assert_int_eq(res.bits[j], y.bits[j]);
  }
}
END_TEST

START_TEST(negate4) {
  s21_decimal x = {{4294967295, 4294967295, 4294967295, SetScale(28, 0)}};
  s21_decimal y = {{4294967295, 4294967295, 4294967295, SetScale(28, 1)}};
  s21_decimal res;
  int i = s21_negate(x, &res);
  ck_assert_int_eq(i, 0);
  for (int j = 0; j < 4; j++) {
    ck_assert_int_eq(res.bits[j], y.bits[j]);
  }
}
END_TEST

START_TEST(negate5) {
  s21_decimal x = {{0, 0, 0, SetScale(0, 0)}};
  s21_decimal y = {{0, 0, 0, SetScale(0, 1)}};
  s21_decimal res;
  int i = s21_negate(x, &res);
  ck_assert_int_eq(i, 0);
  for (int j = 0; j < 4; j++) {
    ck_assert_int_eq(res.bits[j], y.bits[j]);
  }
}
END_TEST

START_TEST(truncate1) {
  s21_decimal x = {{0, 0, 0, SetScale(0, 0)}};
  s21_decimal y = {{0, 0, 0, SetScale(0, 0)}};
  s21_decimal res;
  int i = s21_truncate(x, &res);
  ck_assert_int_eq(i, 0);
  for (int j = 0; j < 4; j++) {
    ck_assert_int_eq(res.bits[j], y.bits[j]);
  }
}
END_TEST

START_TEST(truncate2) {
  s21_decimal x = {{1, 0, 0, SetScale(1, 0)}};
  s21_decimal y = {{0, 0, 0, SetScale(0, 0)}};
  s21_decimal res;
  int i = s21_truncate(x, &res);
  ck_assert_int_eq(i, 0);
  for (int j = 0; j < 4; j++) {
    ck_assert_int_eq(res.bits[j], y.bits[j]);
  }
}
END_TEST

START_TEST(truncate3) {
  s21_decimal x = {{4294967295, 4294967295, 4294967295, SetScale(28, 0)}};
  s21_decimal y = {{7, 0, 0, SetScale(0, 0)}};
  s21_decimal res;
  int i = s21_truncate(x, &res);
  ck_assert_int_eq(i, 0);
  for (int j = 0; j < 4; j++) {
    ck_assert_int_eq(res.bits[j], y.bits[j]);
  }
}
END_TEST

START_TEST(truncate4) {
  s21_decimal x = {{4294967295, 4294967295, 4294967295, SetScale(27, 0)}};
  s21_decimal y = {{79, 0, 0, SetScale(0, 0)}};
  s21_decimal res;
  int i = s21_truncate(x, &res);
  ck_assert_int_eq(i, 0);
  for (int j = 0; j < 4; j++) {
    ck_assert_int_eq(res.bits[j], y.bits[j]);
  }
}
END_TEST

START_TEST(truncate5) {
  s21_decimal x = {{4294967295, 4294967295, 4294967295, SetScale(28, 1)}};
  s21_decimal y = {{7, 0, 0, SetScale(0, 1)}};
  s21_decimal res;
  int i = s21_truncate(x, &res);
  ck_assert_int_eq(i, 0);
  for (int j = 0; j < 4; j++) {
    ck_assert_int_eq(res.bits[j], y.bits[j]);
  }
}
END_TEST

START_TEST(truncate6) {
  s21_decimal x = {{75483, 0, 0, SetScale(5, 1)}};
  s21_decimal y = {{0, 0, 0, SetScale(0, 0)}};
  s21_decimal res;
  int i = s21_truncate(x, &res);
  ck_assert_int_eq(i, 0);
  for (int j = 0; j < 4; j++) {
    ck_assert_int_eq(res.bits[j], y.bits[j]);
  }
}
END_TEST

START_TEST(truncate7) {
  s21_decimal x = {{100000, 0, 0, SetScale(5, 1)}};
  s21_decimal y = {{1, 0, 0, SetScale(0, 1)}};
  s21_decimal res;
  int i = s21_truncate(x, &res);
  ck_assert_int_eq(i, 0);
  for (int j = 0; j < 4; j++) {
    ck_assert_int_eq(res.bits[j], y.bits[j]);
  }
}
END_TEST

START_TEST(truncate8) {
  s21_decimal dec1;
  dec1.bits[0] =
      0b11111111111111111111111111111111;  // 7922816251426433759354395033.5
  dec1.bits[1] = 0b11111111111111111111111111111111;
  dec1.bits[2] = 0b11111111111111111111111111111111;
  dec1.bits[3] = 0b00000000000000010000000000000000;
  s21_decimal result;
  result.bits[0] = 0b10011001100110011001100110011001;
  result.bits[1] = 0b10011001100110011001100110011001;
  result.bits[2] = 0b00011001100110011001100110011001;
  result.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal res1;
  s21_truncate(dec1, &res1);
  ck_assert_int_eq(res1.bits[0], result.bits[0]);
  ck_assert_int_eq(res1.bits[1], result.bits[1]);
  ck_assert_int_eq(res1.bits[2], result.bits[2]);
  ck_assert_int_eq(res1.bits[3], result.bits[3]);
}
END_TEST

START_TEST(truncate9) {
  s21_decimal value_1 = {{35, 0, 0, SetScale(1, 0)}};
  s21_decimal check = {{3, 0, 0, 0}};
  s21_truncate(value_1, &value_1);
  ck_assert_int_eq(s21_is_equal(value_1, check), 1);
}
END_TEST

START_TEST(truncate10) {
  s21_decimal value_1 = {{123456, 0, 0, SetScale(3, 1)}};
  s21_decimal check = {{123, 0, 0, SetScale(0, 1)}};
  s21_truncate(value_1, &value_1);
  ck_assert_int_eq(s21_is_equal(value_1, check), 1);
}
END_TEST

START_TEST(truncate11) {
  s21_decimal src1;
  src1.bits[3] = 0x000A0000;
  src1.bits[2] = 0x0;
  src1.bits[1] = 0xFFFFFFFF;
  src1.bits[0] = 0xFFFFFFFF;
  s21_decimal result;
  result.bits[3] = 0x0;
  result.bits[2] = 0x0;
  result.bits[1] = 0x0;
  result.bits[0] = 0x6DF37F67;
  s21_decimal res_od;
  s21_truncate(src1, &res_od);
  ck_assert_float_eq(res_od.bits[0], result.bits[0]);
  ck_assert_float_eq(res_od.bits[1], result.bits[1]);
  ck_assert_float_eq(res_od.bits[2], result.bits[2]);
  ck_assert_float_eq(res_od.bits[3], result.bits[3]);
}
END_TEST

START_TEST(truncate12) {
  s21_decimal src1;
  src1.bits[0] = 0b00000000000000000000000001101101;
  src1.bits[1] = 0b00000000000011000110010101011011;
  src1.bits[2] = 0b00000000000000000011000000111001;
  src1.bits[3] = 0b00000000000011100000000000000000;
  s21_decimal result;
  result.bits[0] = 0b10000111101111000001011000011110;
  result.bits[1] = 0b00000000000000000000000000000000;
  result.bits[2] = 0b00000000000000000000000000000000;
  result.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal res_od;
  s21_truncate(src1, &res_od);
  ck_assert_float_eq(res_od.bits[0], result.bits[0]);
  ck_assert_float_eq(res_od.bits[1], result.bits[1]);
  ck_assert_float_eq(res_od.bits[2], result.bits[2]);
  ck_assert_float_eq(res_od.bits[3], result.bits[3]);
}
END_TEST

START_TEST(floor1) {
  s21_decimal x = {{75483, 0, 0, SetScale(5, 1)}};
  s21_decimal y = {{1, 0, 0, SetScale(0, 1)}};
  s21_decimal res;
  int i = s21_floor(x, &res);
  ck_assert_int_eq(i, 0);
  for (int j = 0; j < 4; j++) {
    ck_assert_int_eq(res.bits[j], y.bits[j]);
  }
}
END_TEST

START_TEST(floor2) {
  s21_decimal x = {{4294967295, 4294967295, 4294967295, SetScale(28, 1)}};
  s21_decimal y = {{8, 0, 0, SetScale(0, 1)}};
  s21_decimal res;
  int i = s21_floor(x, &res);
  ck_assert_int_eq(i, 0);
  for (int j = 0; j < 4; j++) {
    ck_assert_int_eq(res.bits[j], y.bits[j]);
  }
}
END_TEST

START_TEST(floor3) {
  s21_decimal x = {{4294967295, 4294967295, 4294967295, SetScale(28, 0)}};
  s21_decimal y = {{7, 0, 0, SetScale(0, 0)}};
  s21_decimal res;
  int i = s21_floor(x, &res);
  ck_assert_int_eq(i, 0);
  for (int j = 0; j < 4; j++) {
    ck_assert_int_eq(res.bits[j], y.bits[j]);
  }
}
END_TEST

START_TEST(floor4) {
  s21_decimal x = {{4294967295, 4294967295, 4294967295, SetScale(1, 0)}};
  s21_decimal y = {{2576980377, 2576980377, 429496729, SetScale(0, 0)}};
  s21_decimal res;
  int i = s21_floor(x, &res);
  ck_assert_int_eq(i, 0);
  for (int j = 0; j < 4; j++) {
    ck_assert_int_eq(res.bits[j], y.bits[j]);
  }
}
END_TEST

START_TEST(floor5) {
  s21_decimal x = {{14, 0, 0, SetScale(1, 1)}};
  s21_decimal y = {{2, 0, 0, SetScale(0, 1)}};
  s21_decimal res;
  int i = s21_floor(x, &res);
  ck_assert_int_eq(i, 0);
  for (int j = 0; j < 4; j++) {
    ck_assert_int_eq(res.bits[j], y.bits[j]);
  }
}
END_TEST

START_TEST(floor6) {
  s21_decimal x = {{75, 0, 0, SetScale(2, 1)}};
  s21_decimal y = {{1, 0, 0, SetScale(0, 1)}};
  s21_decimal res;
  int i = s21_floor(x, &res);
  ck_assert_int_eq(i, 0);
  for (int j = 0; j < 4; j++) {
    ck_assert_int_eq(res.bits[j], y.bits[j]);
  }
}
END_TEST

START_TEST(floor7) {
  s21_decimal src1;
  src1.bits[0] = 0b00001111111111111111111111111111;
  src1.bits[1] = 0b00111110001001010000001001100001;
  src1.bits[2] = 0b00100000010011111100111001011110;
  src1.bits[3] = 0b10000000000010100000000000000000;
  s21_decimal res_od;
  s21_floor(src1, &res_od);
  s21_decimal result;
  result.bits[0] = 0b10100111011001000000000000000000;
  result.bits[1] = 0b00001101111000001011011010110011;
  result.bits[2] = 0b00000000000000000000000000000000;
  result.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_float_eq(res_od.bits[0], result.bits[0]);
  ck_assert_float_eq(res_od.bits[1], result.bits[1]);
  ck_assert_float_eq(res_od.bits[2], result.bits[2]);
  ck_assert_float_eq(res_od.bits[3], result.bits[3]);
}
END_TEST

START_TEST(floor8) {
  s21_decimal x = {{666, 0, 0, SetScale(2, 1)}};
  s21_decimal res = {0};
  s21_decimal result = {{7, 0, 0, SetScale(0, 1)}};
  s21_floor(x, &res);
  for (int i = 0; i < 4; i++) {
    ck_assert_int_eq(res.bits[i], result.bits[i]);
  }
}
END_TEST

START_TEST(round1) {
  s21_decimal x = {{75, 0, 0, SetScale(1, 1)}};
  s21_decimal y = {{8, 0, 0, SetScale(0, 1)}};
  s21_decimal res;
  int i = s21_round(x, &res);
  ck_assert_int_eq(i, 0);
  for (int j = 0; j < 4; j++) {
    ck_assert_int_eq(res.bits[j], y.bits[j]);
  }
}
END_TEST

START_TEST(round2) {
  s21_decimal x = {{0, 0, 0, SetScale(1, 1)}};
  s21_decimal y = {{0, 0, 0, SetScale(0, 1)}};
  s21_decimal res;
  int i = s21_round(x, &res);
  ck_assert_int_eq(i, 0);
  for (int j = 0; j < 4; j++) {
    ck_assert_int_eq(res.bits[j], y.bits[j]);
  }
}
END_TEST

START_TEST(round3) {
  s21_decimal x = {{4294967295, 4294967295, 4294967295, SetScale(28, 1)}};
  s21_decimal y = {{8, 0, 0, SetScale(0, 1)}};
  s21_decimal res;
  int i = s21_round(x, &res);
  ck_assert_int_eq(i, 0);
  for (int j = 0; j < 4; j++) {
    ck_assert_int_eq(res.bits[j], y.bits[j]);
  }
}
END_TEST

START_TEST(round4) {
  s21_decimal x = {{165, 0, 0, SetScale(1, 0)}};
  s21_decimal y = {{17, 0, 0, 0}};
  s21_decimal res;
  int i = s21_round(x, &res);
  ck_assert_int_eq(i, 0);
  for (int j = 0; j < 4; j++) {
    ck_assert_int_eq(res.bits[j], y.bits[j]);
  }
}
END_TEST

START_TEST(round5) {
  s21_decimal x = {{124392478, 0, 0, SetScale(1, 0)}};
  s21_decimal y = {{12439248, 0, 0, 0}};
  s21_decimal res;
  int i = s21_round(x, &res);
  ck_assert_int_eq(i, 0);
  for (int j = 0; j < 4; j++) {
    ck_assert_int_eq(res.bits[j], y.bits[j]);
  }
}
END_TEST

START_TEST(round6) {
  s21_decimal x = {{124392344, 0, 0, SetScale(1, 1)}};
  s21_decimal y = {{12439234, 0, 0, SetScale(0, 1)}};
  s21_decimal res;
  int i = s21_round(x, &res);
  ck_assert_int_eq(i, 0);
  for (int j = 0; j < 4; j++) {
    ck_assert_int_eq(res.bits[j], y.bits[j]);
  }
}
END_TEST

START_TEST(round7) {
  s21_decimal value_1 = {{7464923, 0, 0, SetScale(5, 0)}};
  s21_decimal check = {{75, 0, 0, 0}};
  s21_decimal result;
  int return_value = s21_round(value_1, &result);
  ck_assert_int_eq(s21_is_equal(result, check), 1);
  ck_assert_int_eq(return_value, OK_CODE);
}
END_TEST

START_TEST(round8) {
  s21_decimal value_1 = {{7444923, 0, 0, SetScale(5, 0)}};
  s21_decimal check = {{74, 0, 0, 0}};
  s21_decimal result;
  int return_value = s21_round(value_1, &result);
  ck_assert_int_eq(s21_is_equal(result, check), 1);
  ck_assert_int_eq(return_value, OK_CODE);
}
END_TEST

START_TEST(round9) {
  s21_decimal src1;
  src1.bits[0] = 0b01010101001110101110101110110001;
  src1.bits[1] = 0b00001101101101001101101001011111;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000100100000000000000000;
  s21_decimal result;
  result.bits[0] = 0b00000000000000000000000000000001;
  result.bits[1] = 0b00000000000000000000000000000000;
  result.bits[2] = 0b00000000000000000000000000000000;
  result.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal res_od;
  s21_round(src1, &res_od);
  ck_assert_float_eq(res_od.bits[0], result.bits[0]);
  ck_assert_float_eq(res_od.bits[1], result.bits[1]);
  ck_assert_float_eq(res_od.bits[2], result.bits[2]);
  ck_assert_float_eq(res_od.bits[3], result.bits[3]);
}
END_TEST

START_TEST(round10) {
  s21_decimal src1;
  src1.bits[0] = 0b10010111011100111001111111111111;
  src1.bits[1] = 0b00111100000010000011000110001101;
  src1.bits[2] = 0b00000000000000000000000000000001;
  src1.bits[3] = 0b10000000000001110000000000000000;
  s21_decimal res_od;
  s21_round(src1, &res_od);
  s21_decimal result;
  result.bits[3] = 0b10000000000000000000000000000000;
  result.bits[2] = 0;
  result.bits[1] = 0b00000000000000000000001000010010;
  result.bits[0] = 0b00110110101101101000110001000000;
  ck_assert_float_eq(res_od.bits[0], result.bits[0]);
  ck_assert_float_eq(res_od.bits[1], result.bits[1]);
  ck_assert_float_eq(res_od.bits[2], result.bits[2]);
  ck_assert_float_eq(res_od.bits[3], result.bits[3]);
}
END_TEST

Suite *suite_s21_negate(void) {
  Suite *s = suite_create("negate");
  TCase *tc = tcase_create("negate");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, negate1);
  tcase_add_test(tc, negate2);
  tcase_add_test(tc, negate3);
  tcase_add_test(tc, negate4);
  tcase_add_test(tc, negate5);

  return s;
}

Suite *suite_s21_truncate(void) {
  Suite *s = suite_create("truncate");
  TCase *tc = tcase_create("truncate");
  tcase_add_test(tc, truncate1);
  tcase_add_test(tc, truncate2);
  tcase_add_test(tc, truncate3);
  tcase_add_test(tc, truncate4);
  tcase_add_test(tc, truncate5);
  tcase_add_test(tc, truncate6);
  tcase_add_test(tc, truncate7);
  tcase_add_test(tc, truncate8);
  tcase_add_test(tc, truncate9);
  tcase_add_test(tc, truncate10);
  tcase_add_test(tc, truncate11);
  tcase_add_test(tc, truncate12);
  suite_add_tcase(s, tc);

  return s;
}

Suite *suite_s21_floor(void) {
  Suite *s = suite_create("floor");
  TCase *tc = tcase_create("floor");
  tcase_add_test(tc, floor1);
  tcase_add_test(tc, floor2);
  tcase_add_test(tc, floor3);
  tcase_add_test(tc, floor4);
  tcase_add_test(tc, floor5);
  tcase_add_test(tc, floor6);
  tcase_add_test(tc, floor7);
  tcase_add_test(tc, floor8);

  suite_add_tcase(s, tc);

  return s;
}

Suite *suite_s21_round(void) {
  Suite *s = suite_create("round");
  TCase *tc = tcase_create("round");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, round1);
  tcase_add_test(tc, round2);
  tcase_add_test(tc, round3);
  tcase_add_test(tc, round4);
  tcase_add_test(tc, round5);
  tcase_add_test(tc, round6);
  tcase_add_test(tc, round7);
  tcase_add_test(tc, round8);
  tcase_add_test(tc, round9);
  tcase_add_test(tc, round10);

  return s;
}
