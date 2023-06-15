#include "tests_suitcases.h"

START_TEST(strerror_1) {
    int num_1 = 0;
    ck_assert_str_eq(strerror(num_1), s21_strerror(num_1));
} END_TEST

START_TEST(strerror_2) {
    int num_2 = 105;
    ck_assert_str_eq(strerror(num_2), s21_strerror(num_2));
} END_TEST

START_TEST(strerror_3) {
    int num_3 = 2147483647;
    ck_assert_str_eq(strerror(num_3), s21_strerror(num_3));
} END_TEST

START_TEST(strerror_4) {
    int num_4 = -2147483648;
    ck_assert_str_eq(strerror(num_4), s21_strerror(num_4));
} END_TEST

START_TEST(strerror_5) {
    for (int i = -1; i <= 134; i++) {
        ck_assert_str_eq(s21_strerror(i), strerror(i));
    }
} END_TEST

Suite * suite_strerror(void) {
    Suite *s15;
    TCase *tc15;
    s15 = suite_create("s21_STRERROR");
    tc15 = tcase_create("case_strerror");
    tcase_add_test(tc15, strerror_1);
    tcase_add_test(tc15, strerror_2);
    tcase_add_test(tc15, strerror_3);
    tcase_add_test(tc15, strerror_4);
    tcase_add_test(tc15, strerror_5);
    suite_add_tcase(s15, tc15);
    return s15;
}
