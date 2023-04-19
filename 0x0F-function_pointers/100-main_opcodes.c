#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main- A program that prints the opcodes of its own main function
 * @argc: vector
 * @argv: argument count
 * Return: 0(exit success)
 */

int main(int argc, char *argv[])
{
	int i, count = 0;
	unsigned char *p;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	count = atoi(argv[1]);

	if (count < 0)
	{
		printf("Error\n");
		return (2);
	}

	p = (unsigned char *)main;

	for (i = 0; i < count; i++)
	{
		if (i == (count - 1))
		{
		printf("%02hhx\n", p[i]);
		break;
		}
		printf("%02hhx ", p[i]);
	}

	return (0);
}
