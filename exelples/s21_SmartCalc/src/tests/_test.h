#ifndef _SRC_TESTS_TEST_H_
#define _SRC_TESTS_TEST_H_

#include <check.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

Suite *suite_validate(void);
Suite *suite_infix_to_postfix(void);
Suite *suite_arithmetic(void);
Suite *suite_trigonometric(void);

Suite *suite_credit_calc(void);

#endif  // _SRC_TESTS_TEST_H_
