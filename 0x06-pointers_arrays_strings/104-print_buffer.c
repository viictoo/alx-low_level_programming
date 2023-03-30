#include <stdio.h>
#include <ctype.h>

/**
  * print_buffer-A function that prints a buffer
  * @size: size of bytes of buffer
  * @b: content to print
  * Return: void
  */

void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x ", i);

		for (j = i; j < i + 10; j++)
		{
			if (j < size)
			{
				printf("%02x ", *(b + j));
			}
			else
				printf("   ");
		}
	}

	printf(" ");
	for (j = i; j < i + 10; j++)
	{
		if (j < size)
		{
			if (*(b + j) < 32 || *(b + j) > 126)
				printf("%c", '.');
			else
				printf("%c", *(b + j));
				}

	printf("\n");
	}

	if (size <= 0)
	{
		printf("\n");
		return;
	}
}

