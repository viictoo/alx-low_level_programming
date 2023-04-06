#include "main.h"
/**
  * clutch-A function that determines if strings elements are identical
  * @s1: base string
  * @s2: Test string
  * Return: 1 if identical otherwise 0
  */
int clutch(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
	{
		if (*s1 == '\0')
			return (clutch(s1, s2 + 1));

			return ((clutch(s1 + 1, s2)) || clutch(s1, s2 + 1));
	}
		return ((*s1 == *s2) && clutch(s1 + 1, s2 + 1));
}
/**
  * wildcmp-A function that checks if strings can be considered identical
  * @s1: Base String to match
 * @s2: Test string
 * Return: 1 if identical otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0' && *s1 == '\0')
		return (1);

	if (*s1 == '\0')
	return (*s2 == '*' && (wildcmp(s1, s2 + 1)));
	if (*s2 == '*')
		return (clutch(s1, s2));

	return ((*s1 == *s2) && wildcmp(s1 + 1, s2 + 1));
}

