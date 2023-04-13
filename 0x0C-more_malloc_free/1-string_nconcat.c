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
	int len_s1, len_s2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1  = strlen(s1) + 1;
	len_s2 = n;

	if (n >= strlen(s2))
		len_s2 = strlen(s2);

	cat = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	if (cat == NULL)
		return (NULL);

	char *temp = cat;
	while (len_s1-- > 0)
	{
		*temp++ = *s1++;
	}
	while (len_s2-- > 0)
	{
		*(temp++ + len_s1) = *s2++;
	}
/*
*	using memcpy()
*	memcpy(cat, s1, len_s1);
*	memcpy(cat + len_s1, s2, len_s2);
*/
	cat[len_s1 + len_s2] = '\0';

	return (cat);
}


