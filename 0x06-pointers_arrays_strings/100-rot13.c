#include "main.h"

/**
  * rot13 -A function that encodes a string using rot13
  * @str: pointer to input string
  * Return: pointer
  */


char *rot13(char *str)
{
	int i, j;
	char c;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 2; j++)
		{
			if (j == 0)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					c = 'a';
				}
				else if (str[i] >= 'A' && str[i] <= 'Z')
				{
					c = 'A';
				}
				else
				{
				continue;
				}
			}
			else
				c = 13;

		str[i] = c + ((str[i] - c + 13) % 26);
		}
	}

	return (str);
}

