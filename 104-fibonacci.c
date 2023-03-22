#include <unistd.h>
#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: void
 *
 */

int main(void)
{

	unsigned int a = 1, b = 2;

	int count = 0, digits, i;

	unsigned int temp, divisor;

	while (count < 96)
{
	unsigned int sum = a + b;
	a = b;
	b = sum;
	temp = sum;
	digits = 0;

	while (temp > 0)
	{

		result = fibb1 + fibbnow;
		fibb1 = fibbnow;
		fibbnow = result;


		if (i != 98)
		{
			putchar(',');
			putchar(' ');
		}
		if (result >= 10)
		{
			putchar('0' + (result / 10);
			putchar('0' + (result % 10));

		}
		else
		{
		putchar(' ');
		putchar('0' + result);
	}
	temp /= 10;
	digits++;
	}

	divisor = 1;

	for (i = 1; i < 9 - digits; i++)
	{
	divisor *= 10;

		putchar('\n');
		return (0);

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
	}

	return (0);
	}
