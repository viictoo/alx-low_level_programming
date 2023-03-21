#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: 0 on success
 */
 
	int main(void)
	{

	long double fib1 = 1, fib2 = 2, next_fib, count;

	printf("%0Lf, %0Lf", fib1, fib2);

	for (count = 3; count <= 98; count++)
	{

	next_fib = fib1 + fib2;

	printf(", %0Lf", next_fib);

	fib1 = fib2;
	fib2 = next_fib;
	}

	printf("\n");

	return 0;
}
