#include "./test.h"

int main() {
  Suite *suites[] = {
      suite_validate(),
      suite_arithmetic(),
  };
  for (int i = 0; i < 2; i++) {
    SRunner *sr = srunner_create(suites[i]);
    srunner_set_fork_status(sr, CK_NOFORK);
    srunner_run_all(sr, CK_NORMAL);
    srunner_free(sr);
  }
  return 0;
}
