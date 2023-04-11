#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
  * strtow - A function that spilts a string to words
  * @str: input string parameter to split
  * Return: pointer to an array of strings
  */

char **strtow(char *str)
{
	int word_count = 0, spaces = 1, i = 0, len;
	char *c, **words;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = str; *c != '\0'; c++)
	{
		if (*c == ' ')
			spaces = 1;
		else if (spaces)
		{
			word_count++;
			spaces = 0; }}
	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	spaces = 1;
	for (c = str; *c != '\0'; c++)
	{
		if (*c == ' ')
			spaces = 1;
		else if (spaces)
		{
			len = 1;
			while (*(c + len) != ' ' && *(c + len) != '\0')
				len++;
			words[i] = malloc((len + 1) * sizeof(char));
			if (words[i] == NULL)
			{
				while (--i >= 0)
					free(words[i]);
				free(words);
				return (NULL);
			}
			strncpy(words[i], c, len);
			*(words[i] + len) = '\0';
			i++;
			spaces = 0; }}
	words[i] = NULL;
	return (words); }
