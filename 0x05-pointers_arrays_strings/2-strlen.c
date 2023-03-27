#include "main.h"

/**
  * _strlen-A function that returns the length of a string
  * @s: string
  * Return: length of the string
  */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '0')
	{
		s++;
		len++;
	}
	return (len);
}

