#include "tests_suitcases.h"

START_TEST(strspn_1) {
    char str[] = "23476";
    char str1[] = "234";
    ck_assert_int_eq(strspn(str, str1), s21_strspn(str, str1));
} END_TEST

START_TEST(strspn_2) {
    char str[] = "dg234asfd76";
    char str1[] = "23dfgh4";
    ck_assert_int_eq(strspn(str, str1), s21_strspn(str, str1));
} END_TEST

START_TEST(strspn_3) {
    char str[] = "Hello world\0dg234asfd76";
    char str1[] = "";
    ck_assert_int_eq(strspn(str, str1), s21_strspn(str, str1));
} END_TEST

START_TEST(strspn_4) {
    char str[] = "Hello world\0dg234asfd76";
    char str1[] = "\0";
    ck_assert_int_eq(strspn(str, str1), s21_strspn(str, str1));
} END_TEST

START_TEST(strspn_5) {
    char str[] = "Hello world\0dg234asfd76";
    char str1[] = " H";
    ck_assert_int_eq(strspn(str, str1), s21_strspn(str, str1));
} END_TEST

START_TEST(strspn_6) {
    char str[] = "Hello world\n\0dg234asfd76";
    char str1[] = "H";
    ck_assert_int_eq(strspn(str, str1), s21_strspn(str, str1));
} END_TEST

START_TEST(strspn_7) {
    char str[] = "Hello world\n\0dg234asfd76";
    char str1[] = " ";
    ck_assert_int_eq(strspn(str, str1), s21_strspn(str, str1));
} END_TEST

START_TEST(strspn_8) {
    char str[] = "";
    char str1[] = "";
    ck_assert_int_eq(strspn(str, str1), s21_strspn(str, str1));
} END_TEST

START_TEST(strspn_9) {
    char *s1 = "QWERTY";
    char *s2 = "E";
    char *s3 = "5";
    char *s4 = "3764728asdsa2312";
    char *s5 = "1234567890";
    ck_assert_int_eq(strspn(s1, s2), s21_strspn(s1, s2));
    ck_assert_int_eq(strspn(s2, s1), s21_strspn(s2, s1));
    ck_assert_int_eq(strspn(s1, s1), s21_strspn(s1, s1));
    ck_assert_int_eq(strspn(s1, s3), s21_strspn(s1, s3));
    ck_assert_int_eq(strspn(s4, s5), s21_strspn(s4, s5));
} END_TEST

Suite * suite_strspn(void) {
    Suite *s19;
    TCase *tc19;
    s19 = suite_create("s21_STRSPN");
    tc19 = tcase_create("case_strspn");
    tcase_add_test(tc19, strspn_1);
    tcase_add_test(tc19, strspn_2);
    tcase_add_test(tc19, strspn_3);
    tcase_add_test(tc19, strspn_4);
    tcase_add_test(tc19, strspn_5);
    tcase_add_test(tc19, strspn_6);
    tcase_add_test(tc19, strspn_7);
    tcase_add_test(tc19, strspn_8);
    tcase_add_test(tc19, strspn_9);
    suite_add_tcase(s19, tc19);
    return s19;
}
