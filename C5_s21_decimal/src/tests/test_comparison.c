#include "s21_decimal_tests.h"

START_TEST(is_less_1) {
  s21_decimal x = {{123451967, 202, 7, SetScale(5, 0)}};
  s21_decimal y = {{123451967, 202, 7, SetScale(5, 0)}};
  ck_assert_int_eq(S21_FALSE, s21_is_less(x, y));
}
END_TEST

START_TEST(is_less_2) {
  s21_decimal x = {{123451967, 202, 7, SetScale(6, 0)}};
  s21_decimal y = {{123451967, 202, 7, SetScale(5, 0)}};
  ck_assert_int_eq(S21_TRUE, s21_is_less(x, y));
}
END_TEST

START_TEST(is_less_3) {
  s21_decimal x = {{123451967, 202, 7, SetScale(5, 0)}};
  s21_decimal y = {{123451967, 202, 2, SetScale(5, 0)}};
  ck_assert_int_eq(S21_FALSE, s21_is_less(x, y));
}
END_TEST

START_TEST(is_less_4) {
  s21_decimal x = {{123451967, 0, 7, SetScale(5, 1)}};
  s21_decimal y = {{123451967, 202, 7, SetScale(5, 1)}};
  ck_assert_int_eq(S21_FALSE, s21_is_less(x, y));
}
END_TEST

START_TEST(is_less_5) {
  s21_decimal x = {{123451967, 202, 7, SetScale(5, 1)}};
  s21_decimal y = {{123451967, 202, 7, SetScale(5, 0)}};
  ck_assert_int_eq(S21_TRUE, s21_is_less(x, y));
}
END_TEST

START_TEST(is_less_6) {
  s21_decimal x = {{4294967295, 4294967295, 4294967295, SetScale(5, 0)}};
  s21_decimal y = {{123451967, 202, 7, SetScale(5, 0)}};
  ck_assert_int_eq(S21_FALSE, s21_is_less(x, y));
}
END_TEST

START_TEST(is_less_7) {
  s21_decimal x = {{4294967295, 4294967295, 4294967295, SetScale(7, 0)}};
  s21_decimal y = {{4294967295, 4294967295, 4294967295, SetScale(7, 0)}};
  ck_assert_int_eq(S21_FALSE, s21_is_less(x, y));
}
END_TEST

START_TEST(is_less_8) {
  s21_decimal x = {{4294967295, 4294967295, 4294967295, SetScale(10, 1)}};
  s21_decimal y = {{4294967295, 4294967295, 4294967295, SetScale(10, 0)}};
  ck_assert_int_eq(S21_TRUE, s21_is_less(x, y));
}
END_TEST

START_TEST(is_less_9) {
  s21_decimal x = {{123451967, 202, 7, SetScale(5, 0)}};
  s21_decimal y = {{4294967295, 4294967295, 4294967295, SetScale(10, 0)}};
  ck_assert_int_eq(S21_TRUE, s21_is_less(x, y));
}
END_TEST

START_TEST(is_less_or_equal_1) {
  s21_decimal x = {{123451967, 202, 7, SetScale(5, 0)}};
  s21_decimal y = {{123451967, 202, 7, SetScale(5, 0)}};
  ck_assert_int_eq(S21_TRUE, s21_is_less_or_equal(x, y));
}
END_TEST

START_TEST(is_less_or_equal_2) {
  s21_decimal x = {{123451967, 202, 7, SetScale(6, 1)}};
  s21_decimal y = {{123451967, 202, 7, SetScale(5, 0)}};
  ck_assert_int_eq(S21_TRUE, s21_is_less_or_equal(x, y));
}
END_TEST

START_TEST(is_less_or_equal_3) {
  s21_decimal x = {{123451967, 202, 7, SetScale(5, 1)}};
  s21_decimal y = {{123451967, 202, 2, SetScale(5, 1)}};
  ck_assert_int_eq(S21_TRUE, s21_is_less_or_equal(x, y));
}
END_TEST

START_TEST(is_less_or_equal_4) {
  s21_decimal x = {{123451967, 0, 7, SetScale(5, 1)}};
  s21_decimal y = {{123451967, 202, 7, SetScale(5, 1)}};
  ck_assert_int_eq(S21_FALSE, s21_is_less_or_equal(x, y));
}
END_TEST

START_TEST(is_less_or_equal_5) {
  s21_decimal x = {{123451967, 202, 7, SetScale(5, 0)}};
  s21_decimal y = {{123451967, 202, 7, SetScale(5, 0)}};
  ck_assert_int_eq(S21_TRUE, s21_is_less_or_equal(x, y));
}
END_TEST

START_TEST(is_less_or_equal_6) {
  s21_decimal x = {{4294967295, 4294967295, 4294967295, SetScale(5, 0)}};
  s21_decimal y = {{123451967, 202, 7, SetScale(5, 0)}};
  ck_assert_int_eq(S21_FALSE, s21_is_less_or_equal(x, y));
}
END_TEST

START_TEST(is_less_or_equal_7) {
  s21_decimal x = {{4294967295, 4294967295, 4294967295, SetScale(7, 0)}};
  s21_decimal y = {{4294967295, 4294967295, 4294967295, SetScale(7, 0)}};
  ck_assert_int_eq(S21_TRUE, s21_is_less_or_equal(x, y));
}
END_TEST

START_TEST(is_less_or_equal_8) {
  s21_decimal x = {{4294967295, 4294967295, 4294967295, SetScale(10, 1)}};
  s21_decimal y = {{4294967295, 4294967295, 4294967295, SetScale(10, 0)}};
  ck_assert_int_eq(S21_TRUE, s21_is_less_or_equal(x, y));
}
END_TEST

START_TEST(is_less_or_equal_9) {
  s21_decimal x = {{123451967, 202, 7, SetScale(5, 0)}};
  s21_decimal y = {{4294967295, 4294967295, 4294967295, SetScale(10, 0)}};
  ck_assert_int_eq(S21_TRUE, s21_is_less_or_equal(x, y));
}
END_TEST

START_TEST(is_equal_1) {
  s21_decimal x = {{123451967, 202, 7, SetScale(5, 0)}};
  s21_decimal y = {{123451967, 202, 7, SetScale(5, 0)}};
  ck_assert_int_eq(S21_TRUE, s21_is_equal(x, y));
}
END_TEST

START_TEST(is_equal_2) {
  s21_decimal x = {{123451967, 202, 7, SetScale(6, 0)}};
  s21_decimal y = {{123451967, 202, 7, SetScale(5, 1)}};
  ck_assert_int_eq(S21_FALSE, s21_is_equal(x, y));
}
END_TEST

START_TEST(is_equal_3) {
  s21_decimal x = {{123451967, 202, 7, SetScale(5, 1)}};
  s21_decimal y = {{123451967, 202, 2, SetScale(5, 1)}};
  ck_assert_int_eq(S21_FALSE, s21_is_equal(x, y));
}
END_TEST

START_TEST(is_equal_4) {
  s21_decimal x = {{123451967, 0, 7, SetScale(5, 1)}};
  s21_decimal y = {{123451967, 202, 7, SetScale(5, 1)}};
  ck_assert_int_eq(S21_FALSE, s21_is_equal(x, y));
}
END_TEST

START_TEST(is_equal_5) {
  s21_decimal x = {{123451967, 202, 7, SetScale(5, 0)}};
  s21_decimal y = {{123451967, 202, 7, SetScale(5, 0)}};
  ck_assert_int_eq(S21_TRUE, s21_is_equal(x, y));
}
END_TEST

START_TEST(is_equal_6) {
  s21_decimal x = {{4294967295, 4294967295, 4294967295, SetScale(5, 0)}};
  s21_decimal y = {{123451967, 202, 7, SetScale(5, 0)}};
  ck_assert_int_eq(S21_FALSE, s21_is_equal(x, y));
}
END_TEST

START_TEST(is_equal_7) {
  s21_decimal x = {{4294967295, 4294967295, 4294967295, SetScale(7, 0)}};
  s21_decimal y = {{4294967295, 4294967295, 4294967295, SetScale(7, 0)}};
  ck_assert_int_eq(S21_TRUE, s21_is_equal(x, y));
}
END_TEST

START_TEST(is_equal_8) {
  s21_decimal x = {{4294967295, 4294967295, 4294967295, SetScale(10, 1)}};
  s21_decimal y = {{4294967295, 4294967295, 4294967295, SetScale(10, 0)}};
  ck_assert_int_eq(S21_FALSE, s21_is_equal(x, y));
}
END_TEST

START_TEST(is_equal_9) {
  s21_decimal x = {{123451967, 202, 7, SetScale(5, 0)}};
  s21_decimal y = {{4294967295, 4294967295, 4294967295, SetScale(10, 0)}};
  ck_assert_int_eq(S21_FALSE, s21_is_equal(x, y));
}
END_TEST

START_TEST(is_greater_or_equal_1) {
  s21_decimal x = {{123451967, 202, 7, SetScale(5, 0)}};
  s21_decimal y = {{123451967, 202, 7, SetScale(5, 0)}};
  ck_assert_int_eq(S21_TRUE, s21_is_greater_or_equal(x, y));
}
END_TEST

START_TEST(is_greater_or_equal_2) {
  s21_decimal x = {{123451967, 202, 7, SetScale(6, 0)}};
  s21_decimal y = {{123451967, 202, 7, SetScale(5, 1)}};
  ck_assert_int_eq(S21_TRUE, s21_is_greater_or_equal(x, y));
}
END_TEST

START_TEST(is_greater_or_equal_3) {
  s21_decimal x = {{123451967, 202, 7, SetScale(5, 1)}};
  s21_decimal y = {{123451967, 202, 2, SetScale(5, 1)}};
  ck_assert_int_eq(S21_FALSE, s21_is_greater_or_equal(x, y));
}
END_TEST

START_TEST(is_greater_or_equal_4) {
  s21_decimal x = {{123451967, 0, 7, SetScale(5, 1)}};
  s21_decimal y = {{123451967, 202, 7, SetScale(5, 1)}};
  ck_assert_int_eq(S21_TRUE, s21_is_greater_or_equal(x, y));
}
END_TEST

START_TEST(is_greater_or_equal_5) {
  s21_decimal x = {{123451967, 202, 7, SetScale(5, 0)}};
  s21_decimal y = {{123451967, 202, 7, SetScale(5, 0)}};
  ck_assert_int_eq(S21_TRUE, s21_is_greater_or_equal(x, y));
}
END_TEST

START_TEST(is_greater_or_equal_6) {
  s21_decimal x = {{4294967295, 4294967295, 4294967295, SetScale(5, 0)}};
  s21_decimal y = {{123451967, 202, 7, SetScale(5, 0)}};
  ck_assert_int_eq(S21_TRUE, s21_is_greater_or_equal(x, y));
}
END_TEST

START_TEST(is_greater_or_equal_7) {
  s21_decimal x = {{4294967295, 4294967295, 4294967295, SetScale(7, 0)}};
  s21_decimal y = {{4294967295, 4294967295, 4294967295, SetScale(7, 0)}};
  ck_assert_int_eq(S21_TRUE, s21_is_greater_or_equal(x, y));
}
END_TEST

START_TEST(is_greater_or_equal_8) {
  s21_decimal x = {{4294967295, 4294967295, 4294967295, SetScale(10, 1)}};
  s21_decimal y = {{4294967295, 4294967295, 4294967295, SetScale(10, 0)}};
  ck_assert_int_eq(S21_FALSE, s21_is_greater_or_equal(x, y));
}
END_TEST

START_TEST(is_greater_or_equal_9) {
  s21_decimal x = {{123451967, 202, 7, SetScale(5, 0)}};
  s21_decimal y = {{4294967295, 4294967295, 4294967295, SetScale(5, 0)}};
  ck_assert_int_eq(S21_FALSE, s21_is_greater_or_equal(x, y));
}
END_TEST

START_TEST(is_greater_1) {
  s21_decimal x = {{123451967, 202, 7, SetScale(5, 0)}};
  s21_decimal y = {{123451967, 202, 7, SetScale(5, 0)}};
  ck_assert_int_eq(S21_FALSE, s21_is_greater(x, y));
}
END_TEST

START_TEST(is_greater_2) {
  s21_decimal x = {{123451967, 202, 7, SetScale(6, 0)}};
  s21_decimal y = {{123451967, 202, 7, SetScale(5, 1)}};
  ck_assert_int_eq(S21_TRUE, s21_is_greater(x, y));
}
END_TEST

START_TEST(is_greater_3) {
  s21_decimal x = {{123451967, 202, 7, SetScale(5, 1)}};
  s21_decimal y = {{123451967, 202, 2, SetScale(5, 1)}};
  ck_assert_int_eq(S21_FALSE, s21_is_greater(x, y));
}
END_TEST

START_TEST(is_greater_4) {
  s21_decimal x = {{123451967, 0, 7, SetScale(5, 1)}};
  s21_decimal y = {{123451967, 202, 7, SetScale(5, 1)}};
  ck_assert_int_eq(S21_TRUE, s21_is_greater(x, y));
}
END_TEST

START_TEST(is_greater_5) {
  s21_decimal x = {{123451967, 202, 7, SetScale(5, 0)}};
  s21_decimal y = {{123451967, 202, 7, SetScale(5, 0)}};
  ck_assert_int_eq(S21_FALSE, s21_is_greater(x, y));
}
END_TEST

START_TEST(is_greater_6) {
  s21_decimal x = {{4294967295, 4294967295, 4294967295, SetScale(5, 0)}};
  s21_decimal y = {{123451967, 202, 7, SetScale(5, 0)}};
  ck_assert_int_eq(S21_TRUE, s21_is_greater(x, y));
}
END_TEST

START_TEST(is_greater_7) {
  s21_decimal x = {{4294967295, 4294967295, 4294967295, SetScale(7, 0)}};
  s21_decimal y = {{4294967295, 4294967295, 4294967295, SetScale(7, 0)}};
  ck_assert_int_eq(S21_FALSE, s21_is_greater(x, y));
}
END_TEST

START_TEST(is_greater_8) {
  s21_decimal x = {{4294967295, 4294967295, 4294967295, SetScale(10, 1)}};
  s21_decimal y = {{4294967295, 4294967295, 4294967295, SetScale(10, 0)}};
  ck_assert_int_eq(S21_FALSE, s21_is_greater(x, y));
}
END_TEST

START_TEST(is_greater_9) {
  s21_decimal x = {{123451967, 202, 7, SetScale(5, 0)}};
  s21_decimal y = {{4294967295, 4294967295, 4294967295, SetScale(5, 0)}};
  ck_assert_int_eq(S21_FALSE, s21_is_greater(x, y));
}
END_TEST

START_TEST(is_not_equal_1) {
  s21_decimal x = {{123451967, 202, 7, SetScale(5, 0)}};
  s21_decimal y = {{123451967, 202, 7, SetScale(5, 0)}};
  ck_assert_int_eq(S21_FALSE, s21_is_not_equal(x, y));
}
END_TEST

START_TEST(is_not_equal_2) {
  s21_decimal x = {{123451967, 202, 7, SetScale(6, 0)}};
  s21_decimal y = {{123451967, 202, 7, SetScale(5, 1)}};
  ck_assert_int_eq(S21_TRUE, s21_is_not_equal(x, y));
}
END_TEST

START_TEST(is_not_equal_3) {
  s21_decimal x = {{123451967, 202, 7, SetScale(5, 1)}};
  s21_decimal y = {{123451967, 202, 2, SetScale(5, 1)}};
  ck_assert_int_eq(S21_TRUE, s21_is_not_equal(x, y));
}
END_TEST

START_TEST(is_not_equal_4) {
  s21_decimal x = {{123451967, 0, 7, SetScale(5, 1)}};
  s21_decimal y = {{123451967, 202, 7, SetScale(5, 1)}};
  ck_assert_int_eq(S21_TRUE, s21_is_not_equal(x, y));
}
END_TEST

START_TEST(is_not_equal_5) {
  s21_decimal x = {{123451967, 202, 7, SetScale(5, 0)}};
  s21_decimal y = {{123451967, 202, 7, SetScale(5, 0)}};
  ck_assert_int_eq(S21_FALSE, s21_is_not_equal(x, y));
}
END_TEST

START_TEST(is_not_equal_6) {
  s21_decimal x = {{4294967295, 4294967295, 4294967295, SetScale(5, 0)}};
  s21_decimal y = {{123451967, 202, 7, SetScale(5, 0)}};
  ck_assert_int_eq(S21_TRUE, s21_is_not_equal(x, y));
}
END_TEST

START_TEST(is_not_equal_7) {
  s21_decimal x = {{4294967295, 4294967295, 4294967295, SetScale(7, 0)}};
  s21_decimal y = {{4294967295, 4294967295, 4294967295, SetScale(7, 0)}};
  ck_assert_int_eq(S21_FALSE, s21_is_not_equal(x, y));
}
END_TEST

START_TEST(is_not_equal_8) {
  s21_decimal x = {{4294967295, 4294967295, 4294967295, SetScale(10, 1)}};
  s21_decimal y = {{4294967295, 4294967295, 4294967295, SetScale(10, 0)}};
  ck_assert_int_eq(S21_TRUE, s21_is_not_equal(x, y));
}
END_TEST

START_TEST(is_not_equal_9) {
  s21_decimal x = {{123451967, 202, 7, SetScale(5, 0)}};
  s21_decimal y = {{4294967295, 4294967295, 4294967295, SetScale(10, 0)}};
  ck_assert_int_eq(S21_TRUE, s21_is_not_equal(x, y));
}
END_TEST

Suite *suite_s21_is_less(void) {
  Suite *s = suite_create("is_less");
  TCase *tc = tcase_create("is_less");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, is_less_1);
  tcase_add_test(tc, is_less_2);
  tcase_add_test(tc, is_less_3);
  tcase_add_test(tc, is_less_4);
  tcase_add_test(tc, is_less_5);
  tcase_add_test(tc, is_less_6);
  tcase_add_test(tc, is_less_7);
  tcase_add_test(tc, is_less_8);
  tcase_add_test(tc, is_less_9);

  return s;
}

Suite *suite_s21_less_eq(void) {
  Suite *s = suite_create("less_eq");
  TCase *tc = tcase_create("less_eq");
  tcase_add_test(tc, is_less_or_equal_2);
  tcase_add_test(tc, is_less_or_equal_3);
  tcase_add_test(tc, is_less_or_equal_1);
  tcase_add_test(tc, is_less_or_equal_4);
  tcase_add_test(tc, is_less_or_equal_5);
  tcase_add_test(tc, is_less_or_equal_6);
  tcase_add_test(tc, is_less_or_equal_7);
  tcase_add_test(tc, is_less_or_equal_8);
  tcase_add_test(tc, is_less_or_equal_9);
  suite_add_tcase(s, tc);

  return s;
}

Suite *suite_s21_is_equal(void) {
  Suite *s = suite_create("is_equal");
  TCase *tc = tcase_create("is_equal");
  tcase_add_test(tc, is_equal_2);
  tcase_add_test(tc, is_equal_3);
  tcase_add_test(tc, is_equal_1);
  tcase_add_test(tc, is_equal_4);
  tcase_add_test(tc, is_equal_5);
  tcase_add_test(tc, is_equal_6);
  tcase_add_test(tc, is_equal_7);
  tcase_add_test(tc, is_equal_8);
  tcase_add_test(tc, is_equal_9);
  suite_add_tcase(s, tc);

  return s;
}

Suite *suite_s21_gt_or_eq(void) {
  Suite *s = suite_create("gt_or_eq");
  TCase *tc = tcase_create("gt_or_eq");
  tcase_add_test(tc, is_greater_or_equal_2);
  tcase_add_test(tc, is_greater_or_equal_3);
  tcase_add_test(tc, is_greater_or_equal_1);
  tcase_add_test(tc, is_greater_or_equal_4);
  tcase_add_test(tc, is_greater_or_equal_5);
  tcase_add_test(tc, is_greater_or_equal_6);
  tcase_add_test(tc, is_greater_or_equal_7);
  tcase_add_test(tc, is_greater_or_equal_8);
  tcase_add_test(tc, is_greater_or_equal_9);
  suite_add_tcase(s, tc);

  return s;
}

Suite *suite_s21_is_greater(void) {
  Suite *s = suite_create("is_greater");
  TCase *tc = tcase_create("is_greater");
  tcase_add_test(tc, is_greater_2);
  tcase_add_test(tc, is_greater_3);
  tcase_add_test(tc, is_greater_1);
  tcase_add_test(tc, is_greater_4);
  tcase_add_test(tc, is_greater_5);
  tcase_add_test(tc, is_greater_6);
  tcase_add_test(tc, is_greater_7);
  tcase_add_test(tc, is_greater_8);
  tcase_add_test(tc, is_greater_9);
  suite_add_tcase(s, tc);

  return s;
}

Suite *suite_s21_is_nt_equal(void) {
  Suite *s = suite_create("is_nt_equal");
  TCase *tc = tcase_create("is_nt_equal");
  tcase_add_test(tc, is_not_equal_2);
  tcase_add_test(tc, is_not_equal_3);
  tcase_add_test(tc, is_not_equal_1);
  tcase_add_test(tc, is_not_equal_4);
  tcase_add_test(tc, is_not_equal_5);
  tcase_add_test(tc, is_not_equal_6);
  tcase_add_test(tc, is_not_equal_7);
  tcase_add_test(tc, is_not_equal_8);
  tcase_add_test(tc, is_not_equal_9);
  suite_add_tcase(s, tc);

  return s;
}