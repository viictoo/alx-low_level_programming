#include <stdio.h>

/**
  * main- A program that prints all the arguments it receives
  * @argv: pointer to first argument in array
  * @argc: array of arguments
  * Return: 0 exit success
  */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}

	return (0);
}
