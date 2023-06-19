#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 * @n: pointer to a number
 * @index:  index of the bit you want to set
 * Return: 1 (exit success) otherwise -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n | 1 << index;

	return (1);
}
