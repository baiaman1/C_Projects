#include "./s21_smart_calc.h"

//* for debugging
// void s21_print_stack(N_stack *A) {
//     if (A) {
//         printf("capacity %i, top   %d, \narray:\n", A->capacity, A->top);
//         for (int i = 0; i < A->top + 1; i++) {
//             printf("val %lf, prio %d, type %d\n", A->array[i].value,
//                    A->array[i].priority,
//                    A->array[i].type);
//         }
//     } else {
//         printf("Stack is not present!!\n");
//     }
// }

// void s21_print_elem(N_input *A) {
//     if (A) {
//         printf("priority %d type %d value %f\n", A->priority, A->type, A->value);
//     } else {
//         printf("Stack is not present!!\n");
//     }
// }


/**
 * @brief creates a stack with allocated
 * memory and returns
 * @param capacity integer
 * @param err integer
 * @return N_stack*
 */
N_stack *s21_create_stack(int capacity, int *err) {
    N_stack *result = (N_stack *)malloc(sizeof(N_stack));
    if (result) {
        result->array = calloc(capacity * sizeof(N_input), sizeof(N_input));
        if (result->array) {
            result->capacity = capacity;
            result->top = -1;
        } else {
            free(result);
            *err = 1;
        }
    } else {
        free(result);
        *err = 1;
    }
    return result;
}

/**
 * @brief removes the stack and
 * clears the allocated memory
 * @param A
 */
void s21_remove_stack(N_stack *A) {
    if (A) {
        free(A->array);
        free(A);
    }
}

/**
 * @brief checks if the stack is full
 * and returns an error code
 * @param A N_stack
 * @return 0 - NOT FULL, 1 - FULL
 */
int s21_is_full_stack(N_stack *A) {
    int err = 0;
    if (A->top == A->capacity - 1) {
        err = 1;
    }
    return err;
}

/**
 * @brief checks if the stack is empty
 * and returns an error code
 * @param A
 * @return 0 - NOT EMPTY, 1 - EMPTY
 */
int s21_is_empty_stack(N_stack *A) {
    int err = 0;
    if (A->top == -1) {
        err = 1;
    }
    return err;
}

/**
 * @brief pushes element onto the stack
 * and returns an error code
 * @param A
 * @param B
 * @return 0 - OK, 1 - FULL
 */
int s21_push_stack(N_stack *A, N_input B) {
    int err = s21_is_full_stack(A);
    if (!err) {
        A->top++;
        A->array[A->top] = B;
    }
    return err;
}

/**
 * @brief pops the top element of the
 * stack and returns an error code
 * @param A N_stack *
 * @param B N_input *
 * @return 0 - OK, 1 - EMPTY
 */
int s21_pop_stack(N_stack *A, N_input *B) {
    int err = s21_is_empty_stack(A);
    B->value = 0;
    B->type = 19;
    if (!err) {
        *B = A->array[A->top];
        A->top--;
    }
    return err;
}

/**
 * @brief takes information about the top
 * element of the stack and returns an error code
 * @param A
 * @param B
 * @return 0 - OK, 1 - EMPTY
 */
int s21_peek_stack(N_stack *A, N_input *B) {
    int ret = s21_is_empty_stack(A);
    B->value = 0;
    B->type = 19;
    if (!ret) {
        *B = A->array[A->top];
    }
    return ret;
}

/**
 * @brief checks if the element is a digit or not
 *
 * @param ch
 * @return  0 - false, 1 - true
 */
int s21_if_digits(char ch) {
    int ret = (((ch >= '0') && (ch <= '9')) || ch == '.') ? 1 : 0;
    return ret;
}

/**
 * @brief pushes item details onto the stack
 *
 * @param input_str
 * @param ch
 * @param input_tmp
 * @param str_len
 * @param i
 * @return int
 */
int split_data(const char *input_str, char ch, N_input *input_tmp, int str_len, int *i) {
    if (s21_if_digits(ch)) {
        int j = 0;
        char value_str[INPUT_SIZE] = {0};
        for (; j < str_len - *i; j++) {
            char ch2 = input_str[*i + j];
            if (s21_if_digits(ch2)) {
                char tmp_str[2] = "\0";
                tmp_str[0] = ch2;
                snprintf(value_str + strlen(value_str), sizeof value_str, "%s", tmp_str);
            } else {
                break;
            }
        }
        input_tmp->type = 0;
        input_tmp->priority = number_tt;
        input_tmp->value = atof(value_str);
        *i += j - 1;
    } else if (ch == 'x') {
        input_tmp->type = x_tt;
        input_tmp->priority = x_p;
    } else if (ch == '+') {
        input_tmp->type = plus_tt;
        input_tmp->priority = plus_p;
    } else if (ch == '-') {
        input_tmp->type = minus_tt;
        input_tmp->priority = minus_p;
    } else if (ch == '*') {
        input_tmp->type = mul_tt;
        input_tmp->priority = mul_p;
    } else if (ch == '/') {
        input_tmp->type = div_tt;
        input_tmp->priority = div_p;
    } else if (ch == 'm') {
        input_tmp->type = mod_tt;
        input_tmp->priority = mod_p;
    } else if (ch == '^') {
        input_tmp->type = pow_tt;
        input_tmp->priority = pow_p;
    } else if (ch == 'c') {
        input_tmp->type = cos_tt;
        input_tmp->priority = cos_p;
    } else if (ch == 's') {
        input_tmp->type = sin_tt;
        input_tmp->priority = sin_p;
    } else if (ch == 't') {
        input_tmp->type = tan_tt;
        input_tmp->priority = tan_p;
    } else if (ch == 'C') {
        input_tmp->type = acos_tt;
        input_tmp->priority = acos_p;
    } else if (ch == 'S') {
        input_tmp->type = asin_tt;
        input_tmp->priority = asin_p;
    } else if (ch == 'T') {
        input_tmp->type = atan_tt;
        input_tmp->priority = atan_p;
    } else if (ch == 'q') {
        input_tmp->type = sqrt_tt;
        input_tmp->priority = sqrt_p;
    } else if (ch == 'n') {
        input_tmp->type = ln_tt;
        input_tmp->priority = ln_p;
    } else if (ch == 'g') {
        input_tmp->type = log_10_tt;
        input_tmp->priority = log_10_p;
    } else if (ch == '(') {
        input_tmp->type = par_left_tt;
        input_tmp->priority = par_left_p;
    } else if (ch == ')') {
        input_tmp->type = par_right_tt;
        input_tmp->priority = par_right_p;
    }
    return 1;
}

/**
 * @brief converts the input string
 * to an infix notation
 * @param input_str
 * @param err
 * @return N_stack*
 */
N_stack *s21_input_to_infix_expression(char *input_str, int *err) {
    N_stack *result = s21_create_stack(INPUT_SIZE, err);
    if (*err || !input_str || strlen(input_str) == 0) {
        *err = 1;
    } else {
        int str_len = strlen(input_str);
        for (int i = 0; i < str_len; i++) {
            char tmp;
            N_input input_tmp = {0};
            tmp = input_str[i];
            if (i == (str_len - 1) && tmp == '=') {
                continue;
            }
            split_data(input_str, tmp, &input_tmp, str_len, &i);
            s21_push_stack(result, input_tmp);
        }
    }
    return result;
}

/**
 * @brief pop an element from the waiting
 * stack and push it onto the stack
 * @param in_expectation
 * @param postfix
 * @return int
 */
int s21_pop_push(N_stack *in_expectation, N_stack *postfix) {
    N_input tmp;
    int err = s21_pop_stack(in_expectation, &tmp);
    if (!err) {
        err = s21_push_stack(postfix, tmp);
    }
    return err;
}

/**
 * @brief validation of data entry
 *  and returns an error code
 * @param in_expectation
 * @param inf_tmp
 * @return 0 - OK, 1 - Fail
 */
int s21_find_type_prior_err(N_stack *in_expectation, N_input inf_tmp) {
    N_input q_top;
    s21_peek_stack(in_expectation, &q_top);
    int err = q_top.type != incorrect_tt && q_top.type != par_left_tt ? 0 : 1;
    if (!err) {
        err = (q_top.priority > inf_tmp.priority) || ((q_top.priority == inf_tmp.priority) && \
               (inf_tmp.type != pow_tt)) ? 0 : 1;
    }
    return err;
}

/**
 * @brief shift the infix entry to the postfix
 * entry and return the new stack
 * @param infix N_stack *
 * @param err
 * @return N_stack*
 */
N_stack *s21_infix_expr_to_postfix(N_stack infix, int *err) {
    N_stack *postfix = s21_create_stack(INPUT_SIZE, err);
    if (!*err) {
        N_stack *in_expectation = s21_create_stack(INPUT_SIZE, err);
        if (!*err) {
            for (int i = 0; i < infix.top + 1; i++) {
                N_input inf_tmp = infix.array[i];
                int inf_tmp_type = inf_tmp.type;
                if (inf_tmp_type >= number_tt && inf_tmp_type <= x_tt) {
                    s21_push_stack(postfix, inf_tmp);
                } else if (inf_tmp_type >= cos_tt && inf_tmp_type <= log_10_tt) {
                    s21_push_stack(in_expectation, inf_tmp);
                } else if (inf_tmp_type >= plus_tt && inf_tmp_type <= pow_tt) {
                    while (!s21_find_type_prior_err(in_expectation, inf_tmp)) {
                        s21_pop_push(in_expectation, postfix);
                    }
                    s21_push_stack(in_expectation, inf_tmp);
                } else if (inf_tmp_type == par_left_tt) {
                    s21_push_stack(in_expectation, inf_tmp);
                } else if (inf_tmp_type == par_right_tt) {
                    N_input q_top;
                    s21_peek_stack(in_expectation, &q_top);
                    while (q_top.type != par_left_tt) {
                        s21_pop_push(in_expectation, postfix);
                        s21_peek_stack(in_expectation, &q_top);
                    }
                    N_input tmp_zero, tmp_n;
                    s21_pop_stack(in_expectation, &tmp_zero);
                    s21_peek_stack(in_expectation, &tmp_n);
                    if (tmp_n.type >= cos_tt && tmp_n.type <= log_10_tt) {
                        s21_pop_push(in_expectation, postfix);
                    }
                }
            }
            while (in_expectation->top >= 0) {
                s21_pop_push(in_expectation, postfix);
            }
            s21_remove_stack(in_expectation);
        }
    }
    return postfix;
}

/**
 * @brief perform arithmetic operations with elements
 * and return the result
 * @param postf_type
 * @param par_1
 * @param par_2
 * @return double
 */
double s21_calc_arithmetic(int postf_type, double par_1, double par_2) {
    double res = 0;
    if (postf_type == plus_tt) {
        res = par_1 + par_2;
    } else if (postf_type == minus_tt) {
        res = par_1 - par_2;
    } else if (postf_type == mul_tt) {
        res = par_1 * par_2;
    } else if (postf_type == div_tt) {
        res = par_1 / par_2;
    } else if (postf_type == mod_tt) {
        res = fmod(par_1, par_2);
    } else if (postf_type == pow_tt) {
        res = pow(par_1, par_2);
    } else if (postf_type == cos_tt) {
        res = cos(par_2);
    } else if (postf_type == sin_tt) {
        res = sin(par_2);
    } else if (postf_type == tan_tt) {
        res = tan(par_2);
    } else if (postf_type == acos_tt) {
        res = acos(par_2);
    } else if (postf_type == asin_tt) {
        res = asin(par_2);
    } else if (postf_type == atan_tt) {
        res = atan(par_2);
    } else if (postf_type == sqrt_tt) {
        res = sqrt(par_2);
    } else if (postf_type == ln_tt) {
        res = log(par_2);
    } else if (postf_type == log_10_tt) {
        res = log10(par_2);
    }
    return res;
}

/**
 * @brief read from the stack and perform
 * calculations and return the result
 * @param postfix N_stack
 * @param x value
 * @return double
 */
double s21_calc_rpn(N_stack postfix, double x) {
    int err = 0;
    N_stack *main_stack = s21_create_stack(INPUT_SIZE, &err);
    for (int i = 0; i <= postfix.top; i++) {
        N_input res = {0}, postf_arr = postfix.array[i];
        int postf_type = postf_arr.type;
        if (postf_type >= number_tt && postf_type <= x_tt) {
            if (postf_type) {
                res.value = x;
            } else {
                res.value = postf_arr.value;
            }
        } else {
            N_input tmp = {0};
            s21_pop_stack(main_stack, &tmp);
            double par_2 = tmp.value, par_1 = 0;
            if (postf_type >= plus_tt && postf_type <= pow_tt) {
                s21_pop_stack(main_stack, &tmp);
                par_1 = tmp.value;
            }
            res.value = s21_calc_arithmetic(postf_type, par_1, par_2);
        }

        s21_push_stack(main_stack, res);
    }
    double result = main_stack->array[0].value;

    s21_remove_stack(main_stack);
    return result;
}

/**
 * @brief a function that takes a string and
 * then does all the main work with it
 * @param input
 * @param x
 * @return double
 */
double s21_calculateResult(char *input, double x) {
    double res = 0;
    if (!s21_validate(input)) {
        int err = 0;
        N_stack *stk = s21_input_to_infix_expression(input, &err);
        if (!err) {  // s21_print_stack(stk);
        }
        N_stack *stk2 = s21_infix_expr_to_postfix(*stk, &err);
        if (!err) {  // s21_print_stack(stk2);
        }
        res = s21_calc_rpn(*stk2, x);

        s21_remove_stack(stk);
        s21_remove_stack(stk2);
    }
    return res;
}





// int main() {
//     // smart_calc solution
//     char input[INPUT_SIZE] = "88+33";
//     printf("input: |%s|\n", input);
//     int temp = s21_validate(input);
//     if (!temp) {
//         int err = 0;
//         N_stack *stk = s21_input_to_infix_expression(input, &err);
//         if(!err) {
//             s21_print_stack(stk);
//         }
//         printf("input_2\n");
//         N_stack *stk2 = s21_infix_expr_to_postfix(*stk, &err);
//         if(!err) {
//             s21_print_stack(stk2);
//         }
//         double res = 0;
//         double x = 3;
//         res = s21_calc_rpn(*stk2, x);
//         printf("res: %lf\n", res);
//     }
//     return 0;
// }
