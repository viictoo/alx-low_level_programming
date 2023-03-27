#include "main.h"

/**
  * puts_half-A function that prints the second half of the string
  * @str: input string
  * Return: (void)
  */

void puts_half(char *str)
{
	unsigned int i, len;

	for (i = 0; str[i] != '\0'; i++)
		len++;

	for (i= (len / 2); i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
