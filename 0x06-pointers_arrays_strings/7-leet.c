#include "main.h"

/**
  * leet- A function that encodes a string into '1337'
  * @str: Input string
  * Return: string pointer
  */

char *leet(char *str)
{
	int i, j;

	char leet_num[] = "4433007711";
	char leet_chars[] = "aAeEoOtTlL";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == leet_chars[j])
			{
				str[i] = leet_num[j];
				break;
			}
		}
	}
	return (str);
}
