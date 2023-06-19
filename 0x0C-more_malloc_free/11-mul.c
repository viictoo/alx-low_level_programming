#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

/**
 * mul- A function that multiplies two numbers
 * @num1: integer
 * @num2: integer
 * @len1: length of string 1
 * @len2: length of string 2
 * Return: integer product
 */
long int mul(long num1, long num2, int len1, int len2)
{
	int i, j, n1, n2, carry, swap;
	long int result = 0, mul1 = 1, mul2 = 1;

	for (i = len1 - 1; i >= 0; i--)
	{
		n1 = num1 % 10;
		mul2 = 1;

		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2 % 10;
			carry = 0;

			swap = n1 * n2 + carry + (result / 10);
			carry = swap / 10;
			result = swap % 10;
			mul2 *= 10;
		}

		if (carry > 0)
			result += carry * mul2;

		mul1 *= 1;
		result *= mul1;
	}

	return (result);
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
	unsigned int i, len_1, len_2;

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
		}}
	for (i = 0; i < strlen(argv[2]); i++)
	{
		if (!isdigit(argv[2][i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	len_1 = strlen(argv[1]);
	len_2 = strlen(argv[2]);

	num1 = strtol(argv[1], NULL, 10);
	num2 = strtol(argv[2], NULL, 10);
	 if (num1 == 0 || num2 == 0)
	 {
		 printf("Error\n");
		 exit(98);
	 }
	result = mul(num1, num2, len_1, len_2);
	printf("%ld\n", result);
	return (0);
}

