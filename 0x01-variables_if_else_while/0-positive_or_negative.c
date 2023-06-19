#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Description:main-A program that determines +ve or -ve
 *
 * rand function
 *
 * if statements
 *
 * Return: 0(exit success)
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n < 0)

	{
		printf("%d is negative\n", n);
	}

	else
		printf("%d is zero\n", n);

	return (0);
}
