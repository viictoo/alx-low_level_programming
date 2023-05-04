#include "main.h"

/**
 * binary_to_uint - A function that converts binary to unsigned int
 * @b: string
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, temp = 0, num = 0, x = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != 1)
			return (0);
		temp = *b - '0';
		i++;
		b++;
	}
	while (i > 0)
	{
		num += (temp % 10) * (1 << x);
		temp /= 10;
		i--;
		x++;
	}
	return (num);
}
