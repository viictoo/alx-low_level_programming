#include <stdio.h>

/**
 * main:- A program that prints all the multiples of 3 & 5 < 1024
 *
 * Return: 0(exit) success
 */



int main(void)

{
	int sum = 0;

	int i;

	for (i = 0; i < 1024; i++)

	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	printf("%d\n", sum);

	return (0);
}
