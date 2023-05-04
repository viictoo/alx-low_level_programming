#include "main.h"

/**
 * get_bit - A function that returns the value of a but at a given index
 * @index: index starting from 0 that you want to get
 * @n: integer
 * Return: value of the bit at the index otherwise -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (!n || index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
