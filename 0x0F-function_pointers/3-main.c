#include "function_pointers.h"
#include "3-calc.h"

/**
 * main- a program that performs simple operations and prints the result of
 * the operation, followed by a new line
 * @argc: argument count
 * @argv: pointer to arguments
 * Return: 0(EXIT_SUCCESS)
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*p)(int, int);
	int res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!(get_op_func(argv[2])) || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(98);
	}
	p = get_op_func(argv[2]);
	if (p)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		res = p(num1, num2);
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		exit(99);
	}
	return (0);
}

