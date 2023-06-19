#include "main.h"

/**
  * _strcpy-A function tht copies string
  * @src: string to be copid
  * @dest: the destination string
  * Return: pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	char *destini = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = ('\0');
	return (destini);
}
