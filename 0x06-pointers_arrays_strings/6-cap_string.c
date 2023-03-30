#include "main.h"
#include <string.h>
#include <ctype.h>

/**
  * cap_string- A function that capitalizes all words of a string
  * @str: string to be modified
  * Return: pointer to the string
  */

char *cap_string(char *str)
{
	int i;

	if (isalpha(str[0]))
		str[0] = toupper(str[0]);

	for (i = 1; str[i] != 0; i++)
	{
		if (str[i - 1] == " " ||
				str[i - 1] == '\t' ||
				str[i - 1] == '\n' ||
				str[i - 1] == ',' ||
				str[i - 1] == ';' ||
				str[i - 1] == '.' ||
				str[i - 1] == '!' ||
				str[i - 1] == '?' ||
				str[i - 1] == '"' ||
				str[i - 1] == '(' ||
				str[i - 1] == ')' ||
				str[i - 1] == '{' ||
				str[i - 1] == '}')

			str[i] = toupper(str[i]);
	}
	return (str);
}
