#include "main.h"
#include <string.h>

/**
  * _strcat- This function appends the src string to the dest string,
  * overwriting the terminating null byte (\0) at the end of dest, and
  * then adds a terminating null byte
  * @src: string to be appended
  * @dest: append to string
  * Return: pointer to string dest
  */

char *_strcat(char *dest, char *src)
{
	size_t dest_len = strlen(dest);
	size_t i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}

