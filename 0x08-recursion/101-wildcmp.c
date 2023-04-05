#include "main.h"

/**
  * wildcmp-A function that checks if strings can be considered identical
  * @s1: Base String to match
 * @s2: Test string
 * Return: 1 if identical otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && s2 == '\0')
		return (1);

	else if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
			return (1);
		{
			if (*s1 != '\0')
			{
			return (wildcmp(s1, s2 + 1));

			}
	}
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else
		return (0);
}

