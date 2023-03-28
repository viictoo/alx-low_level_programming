#include <stdio.h>

/**
  * _atoi- A function that convert a string to an integer
  * @s: input string
  * Return: integer value
  */


int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	while (*s != '\0')
	{

		while (*s != '\0')
		{

		if (*s >= '0' && *s <= '9')
		{
			if (*(s - 1) == '-')
				sign = -1;

			num = num * 10 + (*s - '0');

			if !(*(s + 1) >= '0' && *(s + 1) <= '9')
				break;
		}
		else if (num > 0)
			break;
		s++;
		}
	}
	return (sign * num);
}
