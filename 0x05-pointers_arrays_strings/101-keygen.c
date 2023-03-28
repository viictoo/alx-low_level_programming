#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main-A program that generates a sequence of random characters
  * with a total length 2772
  *
  * Return: (exit success)
  */

int main(void)
{
	int random_num = 0, sum = 0;
	time_t t;

	/*initialize random number*/

	srand((unsigned int) time(&t));

	/*Generate random nummbers until the sum is >= 2772 */

	while (sum < 2772)
	{

	/*generate random number btw 0 and 127*/

		random_num = rand() % 128;

	/*if adding the number would make the sum greater than 2772,exit loop*/

		if ((sum + random_num) > 2772)
		{
				break;
		}
		sum += random_num;

	/*character equivalent of random number*/

		printf("%c", random_num);
	}

	/*char equivalent of difference btw 2772 and sum*/

	printf("%c\n", (2772 - sum));
	return (0);
}

