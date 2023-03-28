#include "main.h"
#include <string.h>

/**
  * puts_half-A function that prints the second half of the string
  * @str: input string
  * Return: (void)
  */

void puts_half(char *str)
{
	unsigned int i, len, half;

	/* len = strlen(str); */
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}


	if (len % 2 != 0)
	{
		half = (len - 1) / 2;
	}
	else
		half = ((len - 1) / 2);

	for (i = half; str[i] != '\0'; i++)

	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
