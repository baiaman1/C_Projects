#include "./s21_smart_calc.h"

stack *stack_create(int capacity) {
  stack *s;
  if (NULL != (s = (stack *)malloc(sizeof(stack)))) {
    s->capacity = capacity;
    s->top = -1;
    if (NULL == (s->lexems = (lexem_t *)malloc(s->capacity * sizeof(lexem_t))))
      exit(1);
  } else {
    exit(1);
  }
  return s;
}

void push(stack *s, lexem_t l) {
  if (s->capacity != s->top) {
    s->lexems[++s->top] = l;
  }
}

lexem_t peek(stack *s) {
  lexem_t a = {0};
  a.type = ERR;
  return (s->top == -1) ? a : s->lexems[s->top];
}

lexem_t pop(stack *s) {
  lexem_t a = {0};
  a.type = ERR;
  return (s->top == -1) ? a : s->lexems[s->top--];
}

void stack_free(stack *s) {
  if (s) {
    free(s->lexems);
    free(s);
  }
}