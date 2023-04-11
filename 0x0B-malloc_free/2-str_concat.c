#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
  * str_concat - A function that concatenates two strings
  * @s1: string
  * @s2: string
  * Return: pointer to new concatenated string otherwise NULL
  */

char *str_concat(char *s1, char *s2)
{
	char *cat;

	unsigned int len_s1 = 0, len_s2 = 0;

	if (s1 != NULL)
		len_s1 = strlen(s1);

	if (s2 != NULL)
		len_s2 = strlen(s2);

	cat = malloc((len_s1 + len_s2 + 1) * sizeof(char));

	if (cat == NULL)
		return (NULL);

	if (s1 != NULL)
		strcpy(cat, s1);

	if (s2 != NULL)
		strcpy(cat + len_s1, s2);

	return (cat);
}
