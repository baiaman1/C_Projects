#include "tests_suitcases.h"

START_TEST(strrchr_1) {
    char str[] = "Techie Delight – Ace the Technical Interviews";
    int c = 'D';
    ck_assert_ptr_eq(strrchr(str, c), s21_strrchr(str, c));
} END_TEST

START_TEST(strrchr_2) {
    char str[] = "Hello World";
    int c = 'e';
    ck_assert_ptr_eq(strrchr(str, c), s21_strrchr(str, c));
} END_TEST

START_TEST(strrchr_3) {
    char str[] = "Hello World";
    int c = 'a';
    ck_assert_ptr_eq(strrchr(str, c), s21_strrchr(str, c));
} END_TEST

START_TEST(strrchr_4) {
    char str[] = "Hello World";
    int c = 0;
    ck_assert_ptr_eq(strrchr(str, c), s21_strrchr(str, c));
} END_TEST

START_TEST(strrchr_5) {
    char str[] = "";
    int c = 'a';
    ck_assert_ptr_eq(strrchr(str, c), s21_strrchr(str, c));
} END_TEST

START_TEST(strrchr_6) {
    char str[] = "Privet verter";
    int c = '\0';
    ck_assert_ptr_eq(strrchr(str, c), s21_strrchr(str, c));
} END_TEST

START_TEST(strrchr_7) {
    char str[] = "a\n\0";
    int c = '\0';
    ck_assert_ptr_eq(strrchr(str, c), s21_strrchr(str, c));
} END_TEST

START_TEST(strrchr_8) {
    char *s1 = "QWERTY";
    char s2 = 'E';
    ck_assert_pstr_eq(strrchr(s1, s2), s21_strrchr(s1, s2));
} END_TEST

Suite * suite_strrchr(void) {
    Suite *s9;
    TCase *tc9;
    s9 = suite_create("s21_STRRCHR");
    tc9 = tcase_create("case_strrchr");
    tcase_add_test(tc9, strrchr_1);
    tcase_add_test(tc9, strrchr_2);
    tcase_add_test(tc9, strrchr_3);
    tcase_add_test(tc9, strrchr_4);
    tcase_add_test(tc9, strrchr_5);
    tcase_add_test(tc9, strrchr_6);
    tcase_add_test(tc9, strrchr_7);
    tcase_add_test(tc9, strrchr_8);
    suite_add_tcase(s9, tc9);
    return s9;
}
