#include "main.h"
#include <string.h>

/**
  * _strspn-A function that returns number of bytes in the initial segement
  * @s: of s which consist only of bytes from accept
  * @accept: string with accepted bytes
  * Return: number of matches
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, count = 0;
	int lena = strlen(accept);


	while (*s != '\0')
	{
		for (i = 0; i < lena; i++)
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}
		}
		if (i == lena)
			break;
		s++;
	}
	return (count);
}

