#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

/**
  * mul- A function that multiplies twi numbers
  * @num1: integer
  * @num2: integer
  * Return: integer product
  */

int mul(char *num1, char *num2)
{
	return (0);

}

/**
  * main-A program that multiplies two positive numbers
  * @argc: integer count of arguments to main
  * @argv: vector
  * Return: prod of two numbers otherwise 98
  */

int main(int argc, char *argv[])
{
	long result;
	long num1, num2;
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 0; i < strlen(argv[1]); i++)
	{
		if (!isdigit(argv[1][i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	for (i = 0; i < strlen(argv[1]); i++)
	{
		if (!isdigit(argv[1][i]))
		{
			printf("Error\n");
			exit(98);
		}
	}


	if (num1 == 0 || num2 == 0)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = strtol(argv[1], NULL, 10);
	num2 = strtol(argv[2], NULL, 10);

	result = (num1 * num2);
	printf("%ld\n", result);
	free(result);


	return (0);
}

