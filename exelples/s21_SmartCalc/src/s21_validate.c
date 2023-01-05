/// \file
#include "./s21_smart_calc.h"

/**
 * @brief validates if input string is correct
 * it also remove spaces, shrinks function names and
 * converts unary operators (+/-) to (0+/-)
 * ex "cos(x(" -> invalid
 * ex " -cos(x)" -> "0-c(x)" ret 0
 * @param input string ex " cos( x )"
 * @return int 0 - ok, >0 - error
 */
int s21_validate(char* input) {
    state val_state = {0};
    if (input) {
        remove_spaces(input);
        remove_unary(input);
        shrink_func_names(input);
        val_state.prev = 0;

        while (*input != '\0') {
            if ((*input >= '0') && (*input <= '9')) {
                if (val_state.printing_x) {
                    val_state.error = 7;
                    break;
                } else {
                    val_state.printing_number = 1;
                }

            } else if (*input == '.') {
                if (val_state.dot_placed || val_state.printing_x) {
                    val_state.error = 1;
                    break;
                } else {
                    val_state.dot_placed = 1;
                }

            } else if (*input == '(') {
                if (val_state.printing_x) {
                    val_state.error = 7;
                    break;
                } else {
                    val_state.par_opened += 1;
                    val_state.printing_number = 0;
                }

            } else if (*input == ')') {
                if (val_state.par_opened <= 0 || val_state.prev == '(') {
                    val_state.error = 2;
                    break;
                } else {
                    val_state.par_opened -= 1;
                }
                val_state.printing_number = 0;

            } else if ((*input == '+') || (*input == '-') ||
                       (*input == '/') || (*input == '*') ||
                       (*input == '^') || (*input == 'm')) {
                if (!val_state.printing_number && (val_state.prev != ')') &&
                    (val_state.prev != 'x')) {
                    val_state.error = 3;
                    break;
                } else {
                    val_state.printing_number = 0;
                    val_state.printing_x = 0;
                }

            } else if ((*input == 'C') || (*input == 'S') || (*input == 'T') ||
                       (*input == 'c') || (*input == 's') || (*input == 't') ||
                       (*input == 'q') || (*input == 'n') || (*input == 'g')) {
                if ((*(input + 1) != '(') || ((val_state.prev != '(') &&
                                              (val_state.prev != '+') && (val_state.prev != '-') &&
                                              (val_state.prev != '/') && (val_state.prev != '*') &&
                                              (val_state.prev != '^') && (val_state.prev != 0))) {
                    val_state.error = 6;
                    break;
                } else {
                    val_state.printing_number = 0;
                }

            } else if (*input == 'x') {
                if (val_state.printing_number || (val_state.prev == ')') ||
                    val_state.prev == 'x') {
                    val_state.error = 7;
                    break;
                } else {
                    val_state.printing_x = 1;
                    val_state.printing_number = 0;
                }

            } else {
                val_state.error = 4;
                break;
            }
            if (!val_state.printing_number) val_state.dot_placed = 0;
            val_state.prev = *input;
            input++;
        }
        if (!val_state.error && (val_state.par_opened != 0)) {
            val_state.error = 5;
        }
    } else {
        val_state.error = 8;
    }
    return val_state.error;
}

/**
 * @brief get rid of all spaces
 * for convenient parsing
 * @param input string ex " cos( x )"
 */
void remove_spaces(char* input) {
    char* tmp = input;
    while (*tmp == ' ') tmp++;
    if (tmp != input) memmove(input, tmp, INPUT_SIZE - 1);

    char* d = input;
    do {
        while (*d == ' ') {
            ++d;
        }
    } while ((*input++ = *d++));
}

/**
 * @brief get rid of unary plus and minus
 * for convenient parsing
 * @param input string ex "cos(x)"
 */
void remove_unary(char* input) {
    char* ptr = input;
    if (ptr) {
        char prev = *ptr;
        if ((prev == '+') || (prev == '-')) {
            shift_arr(input, INPUT_SIZE - 1, 1, 0);
            input[0] = '0';
        }
        for (int i = 1; (i < INPUT_SIZE) && (ptr[i] != '\0'); i++) {
            if (((ptr[i] == '+') || (ptr[i] == '-')) && (prev == '(')) {
                shift_arr(input, INPUT_SIZE - 1, 1, i);
                input[i] = '0';
            }
            prev = ptr[i];
        }
    }
}

/**
 * @brief shrinks names of functions to their one-char synonims
 * for convenient parsing string to stack
 * ex. "acos" -> "C"
 * @param input string ex "cos(x)"
 */
void shrink_func_names(char* input) {
    str_replace(input, "acos", "C");
    str_replace(input, "asin", "S");
    str_replace(input, "atan", "T");

    str_replace(input, "mod", "m");

    str_replace(input, "cos", "c");
    str_replace(input, "sin", "s");
    str_replace(input, "tan", "t");

    str_replace(input, "sqrt", "q");
    str_replace(input, "ln", "n");
    str_replace(input, "log", "g");
}

/**
 * @brief helper function to stretch array
 * ex [0 1 2 3 \0] -> [0 1 2 3 2 3 \0]
 * @param str src and dest ex [0 1 2 3 \0]
 * @param arrsize size of src ex 4
 * @param shift how much to stretch ex 2
 * @param from index from where to stretch 1
 */
void shift_arr(char* str, ssize_t arrsize, int shift, int from) {
    for (int i = arrsize - 1 + shift; i > from; i--) {
        str[i] = str[i - shift];
    }
}

/**
 * @brief replaces substring to replacement
 * ex "cos(x)" -> "c(x)"
 * @param input src and dest
 * @param toreplace what to search and replace
 * @param replacement the replacement
 */
void str_replace(char* input, const char* toreplace, const char* replacement) {
    char buffer[INPUT_SIZE] = {0};
    char* insert_point = &buffer[0];
    const char* tmp = input;
    size_t toreplace_len = strlen(toreplace);
    size_t repl_len = strlen(replacement);

    while (1) {
        const char* p = strstr(tmp, toreplace);
        if (p == NULL) {
            snprintf(insert_point, INPUT_SIZE, "%s", tmp);
            break;
        }

        memcpy(insert_point, tmp, p - tmp);
        insert_point += p - tmp;

        memcpy(insert_point, replacement, repl_len);
        insert_point += repl_len;

        tmp = p + toreplace_len;
    }

    snprintf(input, INPUT_SIZE, "%s", buffer);
}
