#include "./s21_smart_calc.h"

int validate(char *str) {
  int res = 0;
  state_t state = {0};
  if (str) {
    for (int i = 0; str[i] != '\0'; i++) {
      // check 1st element: ).*/%^
      if (!val_1st(str[0])) {
        // open bracket
        if (str[i] == '(') {
          state.brecket++;
          if (i != 0) {
            // before (
            if (str[i - 1] == '.' || isdigit(str[i - 1])) {
              res = 11;
              break;
            }
          }
          // after (
          if (val_1st(str[i + 1])) {
            res = 9;
            break;
          }
        }

        // closing bracket
        if (str[i] == ')') {
          state.brecket++;
          // before ) only num or )
          if (isdigit(str[i - 1]) || str[i - 1] == ')') {
            if (i == 0) { // 1st elem = )
              res = 1;
              break;
            }
          } else {
            res = 10;
            break;
          }
        }

        // nums 0-9
        if (isdigit(str[i])) {
          int j = i;
          if (is_func(str[i - 1]) || is_func(str[i + 1])) {
            res = 13;
            break;
          }
          // check repeating dots
          while (isdigit(str[j]) || str[j] == '.') {
            if (str[j] == '.') {
              state.point++;
            }
            if (state.point > 1) {
              res = 7;
              break;
            }
            j++;
          }
          if (res) {
            res = 77;
            break;
          }
          state.point = 0;
        }
        if (str[i] == '.' && (!isdigit(str[i + 1]) || !isdigit(str[i - 1]))) {
          res = 44;
          break;
        }

        // check operators
        if (is_oper(str[i])) {
          if (is_oper(str[i - 1]) || is_oper(str[i + 1]) || str[i - 1] == '.' ||
              str[i + 1] == '.' || str[i + 1] == '\0') {
            res = 8;
            break;
          }
        }

      } else { // 1st false
        res = 2;
        break;
      }
    } // for
    if (state.brecket > 0 && state.brecket % 2 != 0) {
      res = 12;
    }
  } // str != NULL

  return res;
}

int is_func(char sim) {
  int res = 0;

  switch (sim) {
  case 'c':
    res = 1;
    break;
  case 's':
    res = 2;
    break;
  case 't':
    res = 3;
    break;
  case 'a':
    res = 4;
    break;
  case 'l':
    res = 5;
    break;
  default:
    break;
  }

  return res;
}

int is_oper(char sim) {
  int res = 0;

  switch (sim) {
  case '+':
    res = 1;
    break;
  case '-':
    res = 2;
    break;
  case '*':
    res = 3;
    break;
  case '/':
    res = 4;
    break;
  case '^':
    res = 4;
    break;
  case '%':
    res = 5;
    break;
  default:
    break;
  }

  return res;
}

int val_1st(char sim) {
  int res = 0;

  switch (sim) {
  case '.':
    res = 1;
    break;
  case '*':
    res = 2;
    break;
  case '/':
    res = 3;
    break;
  case '%':
    res = 4;
    break;
  case '^':
    res = 5;
    break;
  default:
    break;
  }

  return res;
}

void squez_fname(char *str) {
  repl_fname(str, "asin", "S");
  repl_fname(str, "acos", "C");
  repl_fname(str, "atan", "T");

  repl_fname(str, "sin", "s");
  repl_fname(str, "cos", "c");
  repl_fname(str, "tan", "t");

  repl_fname(str, "sqrt", "q");
  repl_fname(str, "log", "g");
  repl_fname(str, "ln", "n");
}

int repl_fname(char *str, char *from, char *to) {
  char tmp[STR_MAX];
  char *new_str = strstr(str, from);
  if (new_str == NULL) {
    return 0;
  } else {
    int index = new_str - str;
    memcpy(tmp, str, index);
    tmp[index] = 0;
    strcat(tmp, to);
    strcat(tmp, new_str + (int)strlen(from));
    repl_fname(tmp, from, to);
  }
  snprintf(str, STR_MAX, "%s", tmp);
  return 0;
}

char *unary(char *str) {
  char *new_str = NULL;
  char *new_str1 = NULL;
  int str_len = strlen(str);
  int j = str_len - 1;

  while ((str[j] >= '0' && str[j] <= '9') || str[j] == ')' || str[j] == '.') {
    j--;
  }

  if (str[j] == '-') {
    if (str[j - 1] == '(') {
      new_str1 = calloc(str_len, sizeof(char));
      int k = 0;
      for (int i = 0; i < str_len; i++) {
        if (i == j || i == j - 1 || i == str_len - 1) {
        } else {
          new_str1[k] = str[i];
          k++;
        }
      }
    } else {
      new_str = s21_insert(str, "(", j + 1);
      new_str1 = s21_insert(new_str, "-", j + 2);
      new_str1[strlen(new_str1)] = ')';
    }
  } else {
    new_str = s21_insert(str, "(", j + 1);
    new_str1 = s21_insert(new_str, "-", j + 2);
    new_str1[strlen(new_str1)] = ')';
  }

  return new_str1;
}

void *s21_insert(const char *src, const char *str, int start_index) {
  int index = start_index;
  char *new_str = NULL;
  if (src != NULL || (src == NULL && index == 0 && str != NULL)) {
    int src_len = src == NULL ? 0 : strlen(src);
    if (index <= src_len) {
      int str_len = str == NULL ? 0 : strlen(str);
      int tot_len = src_len + str_len;
      new_str = calloc(tot_len + 1, sizeof(char));
      if (new_str != NULL) {
        int i;
        for (i = 0; i < tot_len; i++) {
          if (i < index) {
            new_str[i] = src[i];
          } else if (i < str_len + index) {
            new_str[i] = str[i - index];
          } else {
            new_str[i] = src[i - str_len];
          }
        }
      }
    }
  }
  return new_str;
}

char *add_zero(char *str) {
  char *res = NULL;
  int count = 0;
  if (str[0] == '-')
    count++;

  for (int k = 0; k < (int)strlen(str); k++) {
    if (str[k] == '(') {
      if (str[k + 1] == '-') {
        count++;
      }
    }
  }

  if (count >= 1) {
    res = calloc(STR_MAX, sizeof(char));
    int i = 0, j = 0;
    if (str[0] == '-') {
      res[0] = '0';
      j++;
    }
    for (; i < (int)strlen(str); i++) {
      if (str[i] == '(') {
        if (str[i + 1] == '-') {
          res[j] = str[i];
          j++;
          res[j] = '0';
          j++;
        }
      } else {
        res[j] = str[i];
        j++;
      }
    }
  }

  return res;
}

char *replace_x(char *str, char *replace_str) {
  char *res = calloc(STR_MAX, sizeof(char));
  int j = 0;

  for (int i = 0; i < (int)strlen(str);) {
    int e = 0;
    if (str[i] == 'x') {
      if (i > 0) {
        if (str[i - 1] != '(') {
          res[j] = '(';
          j++;
          e = 1;
        }
      }

      for (int k = 0; k < (int)strlen(replace_str); k++) {
        res[j] = replace_str[k];
        j++;
      }
      if (e) {
        res[j] = ')';
        j++;
      }
      i++;
    } else {
      res[j] = str[i];
      j++;
      i++;
    }
  }

  return res;
}
