#include "s21_decimal_tests.h"

int main(void) {
  // Set seed for random
  srand(time(NULL));
  // Run tests
  run_tests();
  return 0;
}

void run_testcase(Suite *testcase) {
  putchar('\n');

  SRunner *sr = srunner_create(testcase);
  srunner_set_fork_status(sr, CK_NOFORK);
  srunner_run_all(sr, CK_NORMAL);

  srunner_free(sr);
}

void run_tests(void) {
  Suite *list_cases[] = {
      suite_s21_add(),
      suite_s21_sub(),
      suite_s21_mul(),
      suite_s21_div(),
      suite_s21_mod(),
      suite_s21_is_less(),
      suite_s21_less_eq(),
      suite_s21_is_equal(),
      suite_s21_gt_or_eq(),
      suite_s21_is_greater(),
      suite_s21_is_nt_equal(),
      suite_s21_convert(),
      suite_s21_negate(),
      suite_s21_truncate(),
      suite_s21_floor(),
      suite_s21_round(),
      NULL,
  };

  for (Suite **current_testcase = list_cases; *current_testcase;
       current_testcase++) {
    run_testcase(*current_testcase);
  }
}