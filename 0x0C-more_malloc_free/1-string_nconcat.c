#include "main.h"
#include <string.h>

/**
  * string_nconcat- A function that concatenates two strings
  * @s1: string parameter
  * @s2: string parameter
  * @n: number of bytes of string s2 to concatenate
  * Return: pointer to newly allocated space
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat;
	unsigned int len_s1, len_s2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1  = strlen(s1);
	len_s2 = strlen(s2);

	if (n < strlen(s2))
		len_s2 = n;

	cat = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	if (cat == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
	{
		cat[i] = s1[i];
	}
	for (j = 0; j < len_s2; j++, i++)
	{
		cat[i] = s2[j];
	}
/*
*	using memcpy()
*	memcpy(cat, s1, len_s1);
*	memcpy(cat + len_s1, s2, len_s2);
*/
	cat[i] = '\0';

	return (cat);
}


