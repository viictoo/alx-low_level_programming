#ifndef CALC_H
#define CALC_H
#include <stdlib.h>
#include "function_pointers.h"
/**
  * struct op- A struct containing operator and associated function as elements
  * @op: operator
  * @f: function
  */


struct op
{
	char *op;
	int (*f)(int a, int b);
};

typedef struct op op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
#endif
