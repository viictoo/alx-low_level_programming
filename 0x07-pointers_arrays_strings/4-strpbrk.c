#include "main.h"
#include <string.h>

/**
  * _strpbrk-A function that searches a string for any set of bytes
  * @s: source string
  * @accept: string with search bytes
  * Return: pointer to the byte in s that matches one of the bytes in accept
  */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	int lena = strlen(accept);
	int lens = strlen(s);

	for (i = 0; i < lens; i++)
	{
		for (j = 0; j < lena; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}

