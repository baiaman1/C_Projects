#include "./s21_smart_calc.h"

void calculate(char *str) {
  if (str) {
    if (validate(str)) {
      strcpy(str, "ERROR!");
    } else {
      char *new_str = add_zero(str);
      new_str = (new_str == NULL) ? str : new_str;
      squez_fname(new_str);
      stack *infix = separation(new_str);
      stack *post = inf_to_postfix(*infix);
      strcpy(str, result(post));
      stack_free(infix);
      stack_free(post);
    }
  }
}

char *result(stack *post) {
  char *res = calloc(STR_MAX, sizeof(char));
  stack *support = stack_create(STR_MAX);
  for (int i = 0; i <= post->top; i++) {
    if (post->lexems[i].type == NUM) {
      push(support, post->lexems[i]);
    } else {
      lexem_t tmp = {0};
      double right = pop(support).value;
      double left = 0;
      if (post->lexems[i].type < SIN) {
        left = pop(support).value;
      }
      switch (post->lexems[i].type) {
        case PLUS:
          tmp.value = left + right;
          break;
        case MINUS:
          tmp.value = left - right;
          break;
        case MUL:
          tmp.value = left * right;
          break;
        case DIV:
          tmp.value = left / right;
          break;
        case MOD:
          tmp.value = fmod(left, right);
          break;
        case POW:
          tmp.value = pow(left, right);
          break;
        case SIN:
          tmp.value = sin(right);
          break;
        case COS:
          tmp.value = cos(right);
          break;
        case TAN:
          tmp.value = tan(right);
          break;
        case ASIN:
          tmp.value = asin(right);
          break;
        case ACOS:
          tmp.value = acos(right);
          break;
        case ATAN:
          tmp.value = atan(right);
          break;
        case SQRT:
          tmp.value = sqrt(right);
          break;
        case LOG:
          tmp.value = log10(right);
          break;
        case LN:
          tmp.value = log(right);
          break;
        default:
          break;
      }
      push(support, tmp);
    }
  }
  if (res != NULL) {
    snprintf(res, STR_MAX, "%lf", support->lexems[0].value);
  }
  stack_free(support);
  return res;
}