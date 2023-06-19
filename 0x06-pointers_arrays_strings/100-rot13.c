#include "main.h"

/**
  * rot13 -A function that encodes a string using rot13
  * @str: pointer to input string
  * Return: pointer
  */


char *rot13(char *str)
{
	int i, j;
/*
*	char c;
*
*	for (i = 0; str[i] != '\0'; i++)
*	{
*		char c = str[i];
*
*		if (c >= 'a' && c <= 'z')
*			c = 'a' + ((c - 'a' + 13) % 26);
*		else if (c >= 'A' && c <= 'Z')
*			c = 'A' + ((c - 'A' + 13) % 26);
*		else
*			continue;
*
*		str[i] = c;
*
*	}
*/

char *alpha = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
char *rot = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alpha[j])
			{
			str[i] = rot[j];
			break;
			}
		}
	}

	return (str);
}

