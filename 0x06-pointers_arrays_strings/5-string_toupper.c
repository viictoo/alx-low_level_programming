#include "main.h"

/**
  * string_toupper- A function that changes all the lowercase letters of a
  * string to uppercase
  * @str: input string
  * Return: pointer to string
  */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}

	return (str);
}

