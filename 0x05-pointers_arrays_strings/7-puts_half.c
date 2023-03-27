#include "main.h"

/**
  * puts_half-A function that prints the second half of the string
  * @str: input string
  * Return: (void)
  */

void puts_half(char *str)
{
	unsigned int len, i, half;

	while (*(str + len) != '\0')
	{
		len++;
	}

	half = len / 2;

	if (len % 2 != 0)
	{
		half = (len - 1) / 2;
	}

	for (i = len / 2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
