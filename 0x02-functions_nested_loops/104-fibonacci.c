#include <stdio.h>

/**
 * main- A program that prints out fibonacci integers
 *
 * return: 0(exit success)
 * 
 */
 
 
int main()
{

	unsigned int a = 1, b = 2;

	int count = 0;

	putchar('1');
	putchar(',');
	putchar(' ');
	putchar('2');
	putchar(',');
	putchar(' ');

while (count < 96)
{
	unsigned int sum = a + b;
	a = b;
	b = sum % ((unsigned int)1 << 32);
	
	unsigned int temp = sum;
	int digits = 0;
	
	while (temp > 0)
	{
	
	temp /= 10;
	digits++;
	}
	
	temp = sum;
	while (digits > 0) 
	{
	unsigned int divisor = 1;
	
	int i;
	for (i = 1; i < digits; i++)
	{
	divisor *= 10;
	}
	
	putchar(temp / divisor + '0');
	temp %= divisor;
	digits--;
	}
	
	putchar(',');
	putchar(' ');
	count++;
	}
	
	putchar('\n');
	
	return (0);
	}
