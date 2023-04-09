#include <stdio.h>

/**
  * main - A program that prints it's name followed by a new line
  * @argv: array of strings
  * @argc: count of arguments supplied to program
  * Return: 0 exit success
  */


int main(int argc, char *argv[])
{

	printf("%s", argv[0]);
	(void)argc;
	return (0);
}

