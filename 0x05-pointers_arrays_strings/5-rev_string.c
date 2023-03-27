#include "main.h"
#include <string.h>

/**
  * rev_string-A function that reverses a string
  * @s: Input String
  * Return: (void)
  */

void rev_string(char *s)
{
	int j, i, len;
	char swap;

	len = strlen(s);

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		swap = s[i];
		s[i] = s[j];
		s[j] = swap;
	}
}
