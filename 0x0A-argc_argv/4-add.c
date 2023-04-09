#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - A program that adds two positive numbers
  * @argc: count of arguments passed to main
  * @argv: vector to arguments in main
  * Return: 0 exit success otherwise 1
  */

int main(int argc, char *argv[])
{
	int i, j, sum  = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	else
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
			if (!(argv[i][j] >= 48 && argv[i][j] <= 57))
			{
				printf("Error\n");
				return (1);
			}
			}
			sum += atoi(argv[i]);
		}
	printf("%d\n", sum);
	return (0);
}
