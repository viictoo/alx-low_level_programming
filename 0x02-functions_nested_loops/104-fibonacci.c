#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: 0 on success
 */

	int main(void)
	{

	unsigned long long fib1 = 1, fib2 = 2, next_fib, count;

	printf("%lld, %lld", fib1, fib2);

	for (count = 3; count <= 98; count++)
	{

	next_fib = fib1 + fib2;

	printf(", %lld", next_fib);

	fib1 = fib2;
	fib2 = next_fib;
	}

	printf("\n");

	return (0);
}
