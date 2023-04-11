#include "main.h"

/**
  * create_array - A function that creates an array of chars and initializes
  * it with a specific char
  * @size: size of the array
  * @c: initialization char
  * Return: 0 (exit success) otherwise NULL
  */

char *create_array(unsigned int size, char c)
{
	char *str;
	int i;

	if (size == 0)
		return (NULL);

	str = malloc(size * sizeof(char));
	
	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
