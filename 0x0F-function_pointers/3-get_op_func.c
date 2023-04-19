#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - A function that selects the correct function to
 * perform the operation asked by the user
 * @s: operator passed as argument to the program
 * Return: pointer to the function that corresponds to the given operator
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	for (i = 0; i < 5; i++)
	{
		if (*s == *ops[i].op)
			return (*(ops[i]).f);
	}
	return (NULL);
}