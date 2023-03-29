#include "main.h"
#include <string.h>

/**
  * _strcmp- A funcion that compares two strings
  * @s1: string to comapare
  * @s2: string to compare
  * Return: 0 if equal , 15 if s1 is longer otherwise -15
  */

int _strcmp(char *s1, char *s2)
{
	size_t s1_len = strlen(s1);
	size_t s2_len = strlen(s2);

	if (s1_len > s2_len)
		return (15);

	else if (s1_len < s2_len)
		return (-15);

	else
		return (0);
}
