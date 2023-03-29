#include "main.h"
#include <string.h>

/**
  * _strncat-  function is similar to the _strcat function, except that
  * it will use at most n bytes from src; and
  * src does not need to be null-terminated if it contains n or more bytes
  * @src: string to append
  * @dest: append to
  * @n: limit of src in bytes
  * Return: pointer to the resulting string dest
  */

char *_strncat(char *dest, char *src, int n)
{
	size_t dest_len = strlen(dest);
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);

