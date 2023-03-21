#include <stdio.h>

/**
 * main- A program that prints out fibonacci integers
 *
 * return: 0(exit success)
 * 
 */
 
 
int main(void)
{

	unsigned int a = 1, b = 2;

	int count = 0, digits;
	unsigned int temp, divisor;
	
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
	b = sum;
	temp = sum;
	digits = 0;
	int i;
	
	while (temp > 0)
	{
	
	temp /= 10;
	digits++;
	}

	divisor = 1;
	
	for (i = 1; i < 9 - digits; i++)
	{
	divisor *= 10;
	}
	
	for (i = 0; i < digits; i++)
	{
	putchar((sum / divisor) % 10 + '0');
	divisor /= 10;
	}
	
	count ++;
	
	if (count == 98)
	{
	putchar('\n');
	break;
	}
	
	putchar(',');
	putchar(' ');
	count++;
	}
	
	return (0);
	}
