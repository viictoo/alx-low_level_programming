#include <unistd.h>
#include <stdio.h>

/**
 * Description:main-A program that prints a string
 *
 * string
 *
 * Return: 1(exit status error)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
