#include "main.h"

/**
  * rev_string-A function that reverses a string
  * @s: Input String
  * Return: (void)
  */

void rev_string(char *s)
{
	int j, i, len;
	char swap;


	while (*(s + len) != '\0')
	{
		len++;
	}

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		swap = s[i];
		s[i] = s[j];
		s[j] = swap;
	}
}
