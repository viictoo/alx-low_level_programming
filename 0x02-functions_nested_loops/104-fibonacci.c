#include <stdio.h>
#include <stdlib.h>

/*
 * main - A program that prints 1st to 98th fibonacci term
 * 
 * Return: 0(exit success)
 */
 
unsigned long fib(unsigned int n)
{
	unsigned long a = 0, b = 1, c = 0;
	unsigned int i;
	
	for (i = 1; i <= n; i++)
	{

	c = a + b;
	a = b;
	b = c;
	}

	return a;
}

int main(void)
{
	unsigned int i;

	for (i = 1; i <= 98; i++)
	{
		printf("%lu", fib(i));
		if (i != 98)
	{
		printf(", ");
	}
	}

	printf("\n");

	return (0);

}
