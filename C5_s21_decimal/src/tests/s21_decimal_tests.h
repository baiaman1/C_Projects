#ifndef SRC_TESTS_S21_DECIMAL_TEST_H_
#define SRC_TESTS_S21_DECIMAL_TEST_H_

#include <check.h>
#include <time.h>

#include "../s21_decimal.h"

Suite *suite_s21_add(void);
Suite *suite_s21_sub(void);
Suite *suite_s21_mul(void);
Suite *suite_s21_div(void);
Suite *suite_s21_mod(void);
Suite *suite_s21_is_less(void);
Suite *suite_s21_less_eq(void);
Suite *suite_s21_is_equal(void);
Suite *suite_s21_gt_or_eq(void);
Suite *suite_s21_is_greater(void);
Suite *suite_s21_is_nt_equal(void);
Suite *suite_s21_convert(void);
Suite *suite_s21_negate(void);
Suite *suite_s21_truncate(void);
Suite *suite_s21_floor(void);
Suite *suite_s21_round(void);

void run_tests(void);
void run_testcase(Suite *testcase);

#endif  //  SRC_TESTS_S21_DECIMAL_TEST_H_