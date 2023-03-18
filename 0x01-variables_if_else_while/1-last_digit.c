#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * description:main-A program that prints last digit
 *
 * if else statements
 *
 * rand function
 *
 * Return: 0(exit status success)
 */


	int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n[0] > 5)
	{
		printf("Last digit of %0f is %d and is greater than 5", n, n[0]);
	}
	else if (n[0] == 0)
	{
		printf("Last digit of %0f is %d and is 0", n, n[0]);

	}	else if (n[0] > 6 && n[0] != 0)
	{
	printf("Last digit of 629438752 is 2 and is less than 6 and not 0", n, n[0]);

	}

	return (0);
}
