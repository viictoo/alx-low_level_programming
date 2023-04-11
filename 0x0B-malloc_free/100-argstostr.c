#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
  * argstostr - A function that concatenates all the arguments of your program
  * @ac: integer size of array
  * @av: vector
  * Return: pointer to new string otherwise NULL
  */

char *argstostr(int ac, char **av)
{
	/*Return NULL if ac == 0 or av == NULL*/
	if (ac == 0 || av == NULL)
		return (NULL);

	int i, j, len = 0;

	/*calculate the total length of the concatenated string + '\n'*/
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}

	/*allocate memory for the concatenated string*/
	char *str = (char *)malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);

	/*iterate over each argument & copy it into the concatenated string*/
	for (i = 0; i < ac; i++)
	{
		strcpy(str + j, av[i]);
		j += strlen(av[i]);
		str[j] = '\n';
		j++;
	}
	str[j] = '\0';

	return (str);
}

