#include <stdio.h>

/**
  * main - A program that prints the number of arguments passed to it
  * @argv: Array of strings
  * @argc: Count number of arguments supplied to main
  * Return: 0 exit status success
  */

int main(int argc, char **argv)
{
	int count = -1;


	while (argc--)
		count++;

	printf("%d\n", count);
	(void) argv;
	return (0);
}
