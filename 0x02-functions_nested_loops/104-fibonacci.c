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
	unsigned long int fibb1 = 1, fibbnow = 2, result;

	int i;

	putchar('1');
	putchar(',');
	putchar(' ');
	putchar('2');
	putchar(',');
	putchar(' ');


	for (i = 3; i <= 98; i++)

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
	}
		putchar('\n');
		return (0);

}
