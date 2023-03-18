#include <stdio.h>

/**
 * main: a program that prints three digits
 *
 * Return: 0(exit success)
 *
 **/

int main(void)

{
	int a, b, c;

	for (a = '0'; a < 9; a++)
	{
		for (b = a + 1; b <= '9'; b++)
		{
			for (c = b; c <= '9'; c++)
			{
				if (c != a) != c)
					putchar(a);
					putchar(b);
					putchar(c);
					if (a == '7' && b == '8')
						continue;
					putchar(',');
					putchar(' ');
			}
		}
	}
	putchar('\n');
	return ('0');
}
