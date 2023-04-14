#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

/**
 * mul- A function that multiplies two numbers
 * @num1: integer
 * @num2: integer
 * @len_1: length of string 1
 * @len_2: length of string 2
 * Return: integer product
 */

int mul(char *num1, char *num2, int len_1, int len_2)
{

	int *result = malloc(sizeof(int) * (len_1 + len_2));
	int i, j, k, start, carry, sum, n1, n2;

	for (i = 0; i < (len_1 + len_2 - 1); i++)
		result[i] = 0;
	i = 0;
	for (j = (len_1 - 1); j >= 0; j--)
	{
		carry = 0;
		n1 = num1[j] - '0';
		k = 0;
		for (k = len_2 - 1; k >= 0; k--)
		{
			n2 = num2[k] - '0';
			sum = n1 * n2 + result[i + k] + carry;
			carry = sum / 10;
			result[i + k] = sum % 10;
		}
		if (carry > 0)
			result[i + k] += carry;
		i++;
	}
	start = 0;
	for (i = len_1 + len_2 - 1; i >= 0; i--)
	{
		if (result[i] != 0)
		{
			start = i;
			break;
		}
	}
	for (i = start; i >= 0; i--)
		printf("%d", result[i]);

	printf("\n");
	free(result);
}

/**
 * main-A program that multiplies two positive numbers
 * argc: integer count of arguments to main
 * argv: vector
 * Return: prod of two numbers otherwise 98
 */

int main(void)
{
/*
*	long result;
*	long num1, num2;
*	int i;
*
*	if (argc != 3)
*	{
*		printf("Error\n");
*		exit(98);
*	}
*	for (i = 0; i < strlen(argv[1]); i++)
*	{
*		if (!isdigit(argv[1][i]))
*		{
*			printf("Error\n");
*			exit(98);
*		}
*	}
*	for (i = 0; i < strlen(argv[1]); i++)
*	{
*		if (!isdigit(argv[1][i]))
*		{
*			printf("Error\n");
*			exit(98);
*		}
*	}
*	if (num1 == 0 || num2 == 0)
*	{
*		printf("Error\n");
*		exit(98);
*	}
*	int  len_1 = strlen(argv[1]);
*	int  len_2 = strlen(argv[2]);
*
*	num1 = strtol(argv[1], NULL, 10);
*	num2 = strtol(argv[2], NULL, 10);
*
*	result = (num1, num2);
*	printf("%ld\n", result);
*/	return (0);
}

