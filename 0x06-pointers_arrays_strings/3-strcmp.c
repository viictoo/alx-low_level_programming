#include "main.h"

/**
  * _strcmp- A funcion that compares two strings
  * @s1: string to comapare
  * @s2: string to compare
  * Return: 0 if equal , 15 if s1 is longer otherwise -15
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
