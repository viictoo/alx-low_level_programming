#include "main.h"

/**
  * puts2-A function that prints every other character of a string
  * @str: input string
  * Return: (void)
  */

void puts2(char *str)
{
	int len;

	while (*(str + len) != '\0')
	{
		_putchar(*(str + len));

		len += 2;

		if (len == '\0')
			break;
	}
	_putchar('\n');
}
