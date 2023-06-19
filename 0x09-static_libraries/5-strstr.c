#include "main.h"
#include <string.h>

/**
  * _strstr-A function that finds the occurrence of the string needle
  * in the string haystack
  * @needle: search substring
  * @haystack: parent string to search through
  * Return: pointer to the beginning of the located substring
  */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int len_n = strlen(needle);
	int len_h = strlen(haystack);

	while (len_h >= len_n)
	{
		for (i = 0; i < len_n; i++)
		{
			if (*(haystack + i) != *(needle + i))
				break;
		}

		if (i == len_n)
		{
			return (haystack);
		}
		haystack++;
		len_h--;
	}
		return (NULL);
}


