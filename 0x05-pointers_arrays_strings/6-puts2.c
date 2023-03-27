#include "main.h"

/**
  * puts2-A function that prints every other character of a string
  * @str: input string
  * Return: (void)
  */

void puts2(char *str)
{
	int len = 0;

	if (str == NULL)
		return;

	while (str[len] != '\0')
	{
		_putchar(str[len]);

		len += 2;



	}
	_putchar('\n');
}