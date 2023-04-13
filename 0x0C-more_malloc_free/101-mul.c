#include "main.h"
#include <ctype.h>
/**
  * mul- A function that multiplies twi numbers
  * @num1: integer
  * @num2: integer
  * Return: integer product
  */

int mul(char *num1, char *num2)
{

}

/**
  * main-A program that multiplies two positive numbers
  * @argc: integer count of arguments to main
  * @argv: vector
  * Return: prod of two numbers otherwise 98
  */

int main(int argc, char *argv[])
{
	int result;
	long num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	for (i = 0; i < strlen(argv[1]); i++)
	{
		if (!isdigit(argv[1][i]))
		{
			printf("Error"\n);
			return (98);
		}
	}
	for (i = 0; i < strlen(argv[1]); i++)
	{




	if (num1 == 0)
	{
		printf("Error\n");
		exit 98;
	}
	num2 = strtol(argv[2]);
	{
		printf("Error\n");
		exit 98;
	}
	return (num1 * num2);
}

