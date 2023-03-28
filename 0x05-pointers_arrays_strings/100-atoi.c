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

	while (*s)
	{
		if (*s == '-')
			sign = -sign;

		else if (*s >= '0' && *s <= '9')
		{
			num = num * 10 + (*s - '0') * sign;

		if (*(s + 1) < '0' || *(s + 1) > '9')
			break;
		}
		s++;
	}

	return (num);
}
