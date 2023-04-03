#include "main.h"

/**
  * _strcmp- A funcion that compares two strings
  * @s1: string to comapare
  * @s2: string to compare
  * Return: 0 if equal , +ve int if s1 is longer otherwise -ve
  */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
