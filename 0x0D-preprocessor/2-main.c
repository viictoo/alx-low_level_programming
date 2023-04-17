#include <stdio.h>
#include <stdlib.h>
#define __FILE__

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
