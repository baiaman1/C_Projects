#ifndef SRC_S21_SMART_CALC_H_
#define SRC_S21_SMART_CALC_H_

#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STR_MAX 256

typedef enum {
  NUM,
  PLUS,
  MINUS,
  MUL,
  DIV,
  MOD,
  POW,
  SIN,
  COS,
  TAN,
  ACOS,
  ASIN,
  ATAN,
  SQRT,
  LOG,
  LN,
  OP_BR,
  CL_BR,
  ERR
} type_t;
typedef struct {
  double value;
  int prio;
  type_t type;
} lexem_t;

typedef struct {
  int top;
  int capacity;
  lexem_t *lexems;
} stack;

// for validate
typedef struct {
  int point;
  int brecket;
} state_t;

void calculate(char *str);
char *result(stack *post);
stack *separation(char *str);
stack *inf_to_postfix(stack input);

int validate(char *str);
int repl_fname(char *str, char *from, char *to);
void squez_fname(char *str);
char *replace_x(char *str, char *value_x);
int val_1st(char sim);
int is_func(char sim);
int is_oper(char sim);
char *unary(char *str);
void *s21_insert(const char *src, const char *str, int start_index);
char *add_zero(char *str);

// stack
stack *stack_create(int capacity);
void push(stack *s, lexem_t l);
lexem_t peek(stack *s);
lexem_t pop(stack *s);
void stack_free(stack *s);

#endif
