#include <stdio.h>
#include <stdlib.h>

/**
  * main - A program that prints the mimimum number of coins
  * to make change for a given amount of money
  * @argv: vector
  * @argc: array of arguments passed to main
  * Return: 0 sxit success otherwise 1
  */

int main(int argc, char *argv[])
{
	int i;
	long balance = 0;
	int count = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2 || argv[1] == NULL)
	{
		printf("Error\n");
		return (1);
	}

	balance = atoi(argv[1]);

	if (balance < 0)
	{
		printf("0\n");
		return (0);
	}

	{

		for (i = 0; i < 5; i++)
		{
		if (balance / coins[i] > 0)
		{
			count += balance / coins[i];
			balance = balance % coins[i];
		}
		}
	}

	printf("%d\n", count);

	return (0);
}
