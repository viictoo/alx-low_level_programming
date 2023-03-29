#include "main.h"

/**
  * cap_string- A function that capitalizes all words of a string
  * @str: string to be modified
  * Return: pointer to the string
  */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		if (isspace(str[i]) || ispunct(str[i]))
			str[i + 1] = toupper(str[i + 1]);
	}
	return (str);
}
