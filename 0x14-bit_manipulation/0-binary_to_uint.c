#include "main.h"

/**
 * binary_to_uint - A function that converts binary to unsigned int
 * @b: string
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	if (!b) return n;
	while (*b)
	{
		if (*b != '0' && *b != '1') return 0;
		n = (n << 1) + (*b++ - '0');
	}
	return n;
}
