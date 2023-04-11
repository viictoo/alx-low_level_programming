#include "main.h"
#include <string.h>

/**
  * _strdup - A function that returns a pointer to a new string which is a 
  * duplicate of the string str
  * @str: string to duplicate
  * Return: pointer to duplicated string otherwise (NULL)
  */

char *_strdup(char *str)
{
	char *dup;

	if (str == NULL)
		return (NULL);

	dup = malloc((strlen(str) + 1) * sizeof(char));
	
	if (dup == NULL)
		return (NULL);

	strcpy(dup, str);

	return (dup);
}
	
