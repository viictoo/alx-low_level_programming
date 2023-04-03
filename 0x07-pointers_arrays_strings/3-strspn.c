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
	unsigned int i, j, count = 0;
	unsigned int lena = strlen(accept);
	unsigned int len_s = strlen(s);


	for (i = 0; i < len_s; i++)
	{
		for (j = 0; j < lena; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (j == lena)
			return (count);
	}
	return (count);
}

