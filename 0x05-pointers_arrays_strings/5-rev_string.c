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
	char swarray[len];

	for (i = 0; i < len; i++)
	{
		swarray[i] = s[i];
	}

	for (i = 0; i < len; i++)
	{
		s[i] = swarray[len - 1 - i];
	}
}
