#include <stdio.h>


/**
 * main:-A program that prints 50 fibonacci numbers
 *
 * Return: 0(exit success)
 */



int main(void)
{

	unsigned long int i, fib1 = 1, fib2 = 2, newnum;


	printf("%lu, %lu", fib1, fib2);

	for (i = 3; i <= 50; i++)
	{
		newnum = fib1 + fib2;

		printf(", %lu", newnum);

		fib1 = fib2;

		fib2 = newnum;
	}

	printf("\n");

	return (0);
}
