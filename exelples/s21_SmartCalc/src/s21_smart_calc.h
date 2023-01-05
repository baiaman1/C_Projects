#ifndef SRC_S21_SMART_CALC_H_
#define SRC_S21_SMART_CALC_H_

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OK 0
#define FAIL 1
#define INPUT_SIZE 256

typedef struct type_t type_t;
typedef struct N_stack N_stack;
typedef struct N_input N_input;
typedef struct state state;

double s21_pow(double a, double b);

//=======================
double s21_deposit_calc(double credit_sum, double credit_duration_value,
                        double credit_duration_type, double credit_percent, double credit_type,
                        double *m_1, double *m_2, double *p_1, double *t_1);

double s21_credit_calc(double credit_sum, double credit_duration_value,
                       double credit_duration_type, double credit_percent, double credit_type,
                       double *m_1, double *m_2, double *p_1, double *t_1);

int s21_validate(char *input);
void shift_arr(char *str, ssize_t arrsize, int shift, int from);
void remove_unary(char *input);
void remove_spaces(char *input);
void str_replace(char *input, const char *toreplace, const char *replacement);
void shrink_func_names(char *input);

void s21_print_stack(N_stack *A);
void s21_print_elem(N_input *A);
N_stack *s21_create_stack(int capacity, int *err);
void s21_remove_stack(N_stack *A);
int s21_is_full_stack(N_stack *A);
int s21_is_empty_stack(N_stack *A);
int s21_push_stack(N_stack *A, N_input B);
int s21_pop_stack(N_stack *A, N_input *B);
int s21_peek_stack(N_stack *A, N_input *B);
int s21_if_digits(char ch);
int split_data(const char *input_str, char ch, N_input *input_tmp, int str_len, int *i);
N_stack *s21_input_to_infix_expression(char *input_str, int *err);
int s21_pop_push(N_stack *in_expectation, N_stack *postfix);
int s21_find_type_prior_err(N_stack *in_expectation, N_input inf_tmp);
N_stack *s21_infix_expr_to_postfix(N_stack infix, int *err);
double s21_calc_arithmetic(int postf_type, double par_1, double par_2);
double s21_calc_rpn(N_stack postfix, double x);
double s21_calculateResult(char *input, double x);

//=======================

struct state {
    int par_opened;
    int dot_placed;
    int printing_number;
    int printing_x;
    char prev;
    int error;
};

typedef enum {
    number_tt = 0,
    x_tt = 1,
    plus_tt = 2,
    minus_tt = 3,
    mul_tt = 4,
    div_tt = 5,
    mod_tt = 6,
    pow_tt = 7,
    cos_tt = 8,
    sin_tt = 9,
    tan_tt = 10,
    acos_tt = 11,
    asin_tt = 12,
    atan_tt = 13,
    sqrt_tt = 14,
    ln_tt = 15,
    log_10_tt = 16,
    par_left_tt = 17,
    par_right_tt = 18,
    incorrect_tt = 19,
} type_tt;

struct N_input {
    double value;
    int priority;
    type_tt type;
};

struct N_stack {
    int top;
    int capacity;
    N_input *array;
};

typedef enum {
    number_p = 0,
    x_p = 0,
    plus_p = 1,
    minus_p = 1,
    mul_p = 2,
    div_p = 2,
    mod_p = 2,
    pow_p = 3,
    cos_p = 4,
    sin_p = 4,
    tan_p = 4,
    acos_p = 4,
    asin_p = 4,
    atan_p = 4,
    sqrt_p = 4,
    ln_p = 4,
    log_10_p = 4,
    par_left_p = 5,
    par_right_p = 5,
} priority_p;

#endif  //  SRC_S21_SMART_CALC_H_
