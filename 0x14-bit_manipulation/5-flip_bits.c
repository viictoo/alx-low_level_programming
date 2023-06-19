#include "main.h"

/**
 * flip_bits - A function that returns the number of bits flipped to get
 * from one number to another
 * @n: starting integer
 * @m: dest integer
 * Return: number of bites to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip;
	unsigned int count = 0;

	flip = n ^ m;

	while (flip != 0)
	{
		flip &= (flip - 1);
		count++;
	}
	return (count);
}
