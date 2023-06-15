#include "s21_smart_calc.h"

stack *separation(char *str) {
  stack *stack = stack_create(STR_MAX);

  for (int i = 0; str[i] != '\0'; i++) {
    lexem_t l = {0};
    int j = 0;
    switch (str[i]) {
    case '+':
      l.prio = 1;
      l.type = PLUS;
      break;
    case '-':
      l.prio = 1;
      l.type = MINUS;
      break;
    case '*':
      l.prio = 2;
      l.type = MUL;
      break;
    case '/':
      l.prio = 2;
      l.type = DIV;
      break;
    case '%':
      l.prio = 2;
      l.type = MOD;
      break;
    case '^':
      l.prio = 3;
      l.type = POW;
      break;
    case 'q':
      l.prio = 4;
      l.type = SQRT;
      break;
    case 'C':
      l.prio = 4;
      l.type = ACOS;
      break;
    case 'S':
      l.prio = 4;
      l.type = ASIN;
      break;
    case 'T':
      l.prio = 4;
      l.type = ATAN;
      break;
    case 's':
      l.prio = 4;
      l.type = SIN;
      break;
    case 'c':
      l.prio = 4;
      l.type = COS;
      break;
    case 't':
      l.prio = 4;
      l.type = TAN;
      break;
    case 'n':
      l.prio = 4;
      l.type = LN;
      break;
    case 'g':
      l.prio = 4;
      l.type = LOG;
      break;
    case '(':
      l.prio = 5;
      l.type = OP_BR;
      break;
    case ')':
      l.prio = 5;
      l.type = CL_BR;
      break;
    default:
      if (isdigit(str[i])) {
        l.value = atof(&str[i]);
        j = i;
        while (isdigit(str[j]) || str[j] == '.') {
          j++;
        }
      }
      break;
    }
    if (isdigit(str[i]) || str[i] == '.') {
      i = (j - 1);
    }
    push(stack, l);
  }

  return stack;
}

stack *inf_to_postfix(stack input) {
  stack *ready = stack_create(STR_MAX);
  stack *support = stack_create(STR_MAX);
  for (int i = 0; i <= input.top; i++) {
    if (input.lexems[i].type == NUM) {
      push(ready, input.lexems[i]);
    } else if (input.lexems[i].type >= SIN && input.lexems[i].type <= LN) {
      push(support, input.lexems[i]);
    } else if (input.lexems[i].type <= POW) {
      lexem_t top_s = peek(support);
      while (top_s.type != ERR && top_s.type != OP_BR) {
        if (top_s.prio >= input.lexems[i].prio) {
          if (input.lexems[i].type != POW) {
            lexem_t tmp_s = pop(support);
            push(ready, tmp_s);
            top_s = peek(support);
          } else {
            break;
          }
        } else {
          break;
        }
      }
      push(support, input.lexems[i]);
    } else if (input.lexems[i].type == OP_BR) {
      push(support, input.lexems[i]);
    } else if (input.lexems[i].type == CL_BR) {
      lexem_t top_s = peek(support);
      while (top_s.type != OP_BR) {
        lexem_t tmp_s = pop(support);
        push(ready, tmp_s);
        top_s = peek(support);
      }
      pop(support);
      if (peek(support).type >= SIN && peek(support).type <= LN) {
        lexem_t tmp_s = pop(support);
        push(ready, tmp_s);
      }
    }
  }
  while (support->top >= 0) {
    lexem_t tmp_s = pop(support);
    push(ready, tmp_s);
  }
  stack_free(support);

  return ready;
}
