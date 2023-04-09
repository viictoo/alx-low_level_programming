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
	int change = 0;
	int count = 0;
	int coins[] = {25, 10, 5, 2, 1};

	change = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (change < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{

		for (i = 0; i < 5; i++)
		{
		if (change / coins[i] >= 0)
		{
			count += change / coins[i];
			change = change % coins[i];
		}
		}
		}
		printf("%d\n", count);
		return (0);
}
