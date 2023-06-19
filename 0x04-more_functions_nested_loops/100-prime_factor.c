#include <stdio.h>

/**
  * main- A program that prints the largest prime factor
  * of number 612852475143 followed by newline
  *
  * Return: 0(exit success)
  */

int main(void)
{
	long n = 612852475143;
	long largest_factor = 1;
	long i;

	for (i = 2; i <= n; i++)
	{
		while (n % i == 0)
		{
		largest_factor = i;
		n /= i;
		}
	}
	printf("%ld\n", largest_factor);

	return (0);
}
