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

	char *swarray[len];

	for (i = 0; i < len / 2; i++)
	{
		swap = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = swap
	}

	s[i] = swarray[len - 1 - i];
}
