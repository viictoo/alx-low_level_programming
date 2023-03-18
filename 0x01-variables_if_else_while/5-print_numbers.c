#include <stdio.h>

/**
 * Description:main-A program to print single digit numbers
 *
 * Return: 0(successs)
 *
*/

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
