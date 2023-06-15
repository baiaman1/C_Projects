#include "tests_suitcases.h"

START_TEST(strlen_1) {
    char str1[] = "\0";
    ck_assert_int_eq(strlen(str1), s21_strlen(str1));
} END_TEST

START_TEST(strlen_2) {
    char str1[] = "Hello World\0";
    ck_assert_int_eq(strlen(str1), s21_strlen(str1));
} END_TEST

START_TEST(strlen_3) {
    char str1[] = "Hello World\0\n";
    ck_assert_int_eq(strlen(str1), s21_strlen(str1));
} END_TEST

START_TEST(strlen_4) {
    char str1[] = "";
    ck_assert_int_eq(strlen(str1), s21_strlen(str1));
} END_TEST

START_TEST(strlen_5) {
    char str1[] = "a\n\0";
    ck_assert_int_eq(strlen(str1), s21_strlen(str1));
} END_TEST

START_TEST(strlen_6) {
    char str1[] = " \n\0";
    ck_assert_int_eq(strlen(str1), s21_strlen(str1));
} END_TEST

START_TEST(strlen_7) {
    char str1[] = " \0";
    ck_assert_int_eq(strlen(str1), s21_strlen(str1));
} END_TEST

START_TEST(strlen_8) {
    char str1[] = "\n\0";
    ck_assert_int_eq(strlen(str1), s21_strlen(str1));
} END_TEST

START_TEST(strlen_9) {
    char str1[] = "\n\n\f\r\t";
    ck_assert_int_eq(strlen(str1), s21_strlen(str1));
} END_TEST

START_TEST(strlen_10) {
    char *str1 = "QWERTY";
    ck_assert_int_eq(strlen(str1), s21_strlen(str1));
} END_TEST

START_TEST(strlen_11) {
    char *str2 = "Q";
    ck_assert_int_eq(strlen(str2), s21_strlen(str2));
} END_TEST

START_TEST(strlen_12) {
    char *str3 = "";
    ck_assert_int_eq(strlen(str3), s21_strlen(str3));
} END_TEST

START_TEST(strlen_13) {
    char *str3 = " ";
    ck_assert_int_eq(strlen(str3), s21_strlen(str3));
} END_TEST

START_TEST(strlen_14) {
    char str1[] = "7623455234523618";
    ck_assert_int_eq(strlen(str1), s21_strlen(str1));
} END_TEST

START_TEST(strlen_15) {
    char str1[] = "ncngejngnwoifnqjewnqw;oeitnoij2o8j29083u4235h05j1091345jrtjijlijwq43234";
    ck_assert_int_eq(strlen(str1), s21_strlen(str1));
} END_TEST

START_TEST(strlen_16) {
    char str1[] = "ncngejngnwoifnqjewnqw\0tjoievgowemowi3045045245";
    ck_assert_int_eq(strlen(str1), s21_strlen(str1));
} END_TEST

Suite * suite_strlen(void) {
    Suite *s;
    TCase *tc;
    s = suite_create("s21_STRLEN");
    tc = tcase_create("case_s21_strlen");
    tcase_add_test(tc, strlen_1);
    tcase_add_test(tc, strlen_2);
    tcase_add_test(tc, strlen_3);
    tcase_add_test(tc, strlen_4);
    tcase_add_test(tc, strlen_5);
    tcase_add_test(tc, strlen_6);
    tcase_add_test(tc, strlen_7);
    tcase_add_test(tc, strlen_8);
    tcase_add_test(tc, strlen_9);
    tcase_add_test(tc, strlen_10);
    tcase_add_test(tc, strlen_11);
    tcase_add_test(tc, strlen_12);
    tcase_add_test(tc, strlen_13);
    tcase_add_test(tc, strlen_14);
    tcase_add_test(tc, strlen_15);
    tcase_add_test(tc, strlen_16);
    suite_add_tcase(s, tc);
    return s;
}

