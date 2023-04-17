#include <stdio.h>
#include <stdlib.h>
#ifndef __FILE__
#define __FILE__
#endif

/**
 * main- A program that prints the name of the file it was compiled from
 *
 * Return: 0(exit success)
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
