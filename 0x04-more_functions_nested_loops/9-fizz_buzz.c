#include <stdio.h>

/**
  * main- A program that prints numbers and characters
  *
  * Return: 0(exit success)
  */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{

		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
		{
			printf("%d", i);
		if (i != 100)
			printf(" ");
		}

	}
	printf("\n");
	return (0);

}
