#include "main.h"

/**
  * _strchr-A function that locates first occurence of character c in
  * string s or NULL if char character is not found
  * @s: search string
  * @c: search character
  * Return: pointer to first occurence
  */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}


	if (c == '\0')
		return (s);

	return ('\0');
}
