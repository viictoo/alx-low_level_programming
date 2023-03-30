#include "main.h"
#include <string.h>

/**
  * _strncpy- function copies the string pointed to by src,
  * including the terminating null byte ('\0'), to the buffer
  * pointed to by dest
  * @dest: destination buffer
  * @src: source string to copy
  * @n: at most n bytes are copied
  * Return: Buffer pointed to by dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
	dest[i] = '\0';
	}

	return (dest);
}
