#include <stdio.h>

/**
 *  * Description:main-A program that prints various types
 *
 * typeof
 *
 *Return: 0(exit status error)
 */


int main(void)
{
	char c;
	int i;
	long int lu;
	long long int lulu;
	float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)(sizeof(c)));
printf("Size of an int: %lu byte(s)\n", (unsigned long)(sizeof(i)));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)(sizeof(lu)));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)(sizeof(lulu)));
printf("Size of a float: %lu byte(s)\n", (unsigned long)(sizeof(f)));
	return (0);
}
