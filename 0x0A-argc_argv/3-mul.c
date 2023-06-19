#include <stdio.h>
#include <stdlib.h>

/**
  * main- A program that multiplies two numbers
  * @argc: count of arguments to main
  * @argv: vector to arguments
  * Return: 0 exit success else Error;
  */

int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%d\n", (atoi(argv[1])) * (atoi(argv[2])));
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
