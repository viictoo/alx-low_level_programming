#include <stdio.h>
#include "main.h"

/**
  * main - A program that prints it's name followed by a new line
  * @argv: array of strings
  * @argc: count of arguments supplied to program
  * Return: 0 exit success
  */


int main(int argc, char *argv[])
{

	if (argc >= 1)
		printf("%s\n", argv[0]);


	return (0);
}

