#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - selects the correct function to perform
 * the operation asked by the user
 * @s: operator passed as argument to the program
 *
 * Return: pointer to the function that corresponds to the given operator
 * or NULL if the operator is invalid
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

	int i = 0;

	for(i = 0; (ops[i].op != NULL); i++)
	{
		if (!(strcmp(s, (ops[i]).op)))
			return (ops[i].f);
	}

	return (NULL);
}

