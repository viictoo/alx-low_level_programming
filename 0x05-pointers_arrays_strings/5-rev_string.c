#include "main.h"

/**
  * rev_string-A function that reverses a string
  * @s: Input String
  * Return: (void)
  */

void rev_string(char *s)
{
	int len, i;

	while (*(s + len) != '\0')
	{
		len++;
	}

	for (i  = len-1; i >= 0; i--)
	{
		_putchar(*(s + i))i;
	}

	_putchar('\n');
}
