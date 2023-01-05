#include "tests_suitcases.h"

START_TEST(strpbrk_1) {
    char str[] = "\0";
    char str1[] = "Per aspera ad astra";
    ck_assert_ptr_eq(strpbrk(str, str1), s21_strpbrk(str, str1));
} END_TEST

START_TEST(strpbrk_2) {
    char str[] = "Hello";
    char str1[] = "lo";
    ck_assert_str_eq(strpbrk(str, str1), s21_strpbrk(str, str1));
} END_TEST

START_TEST(strpbrk_3) {
    char str[] = "";
    char str1[] = " a\n\0";
    ck_assert_ptr_eq(strpbrk(str, str1), s21_strpbrk(str, str1));
} END_TEST

START_TEST(strpbrk_4) {
    char str[] = " schhol21\0";
    char str1[] = "";
    ck_assert_ptr_eq(strpbrk(str, str1), s21_strpbrk(str, str1));
} END_TEST

START_TEST(strpbrk_5) {
    char str[] = " \n\0\0";
    char str1[] = " a\n\0";
    ck_assert_str_eq(strpbrk(str, str1), s21_strpbrk(str, str1));
} END_TEST

START_TEST(strpbrk_6) {
    char str[] = "i am\nproger";
    char str1[] = " a\n\0";
    ck_assert_str_eq(strpbrk(str, str1), s21_strpbrk(str, str1));
} END_TEST

START_TEST(strpbrk_7) {
    char *str = "testtesttesttesttest";
    char *str1 = "testtesttesttesttest";
    ck_assert_ptr_eq(strpbrk(str, "abcabc"), s21_strpbrk(str1, "abcabc"));
} END_TEST

START_TEST(strpbrk_8) {
    char *s1 = "QWERTY";
    char *s2 = "WE";
    ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
    ck_assert_pstr_eq(strpbrk(s2, s1), s21_strpbrk(s2, s1));
    ck_assert_pstr_eq(strpbrk(s1, s1), s21_strpbrk(s1, s1));
    ck_assert_pstr_eq(strpbrk("", ""), s21_strpbrk("", ""));
} END_TEST

Suite * suite_strpbrk(void) {
    Suite *s8;
    TCase *tc8;
    s8 = suite_create("s21_STRPBRK");
    tc8 = tcase_create("case_strpbrk");
    tcase_add_test(tc8, strpbrk_1);
    tcase_add_test(tc8, strpbrk_2);
    tcase_add_test(tc8, strpbrk_3);
    tcase_add_test(tc8, strpbrk_4);
    tcase_add_test(tc8, strpbrk_5);
    tcase_add_test(tc8, strpbrk_6);
    tcase_add_test(tc8, strpbrk_7);
    tcase_add_test(tc8, strpbrk_8);
    suite_add_tcase(s8, tc8);
    return s8;
}
