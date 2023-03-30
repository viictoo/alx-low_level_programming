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

	for (i = 0; i < size; i += 16)
	{
	printf("%08x: ", i);

	for (j = 0; j < 16; j += 2)
	{
		if (j + i < size)
		{
			printf("%02x%02x ", b[i + j], b[i + j + 1]);
		}
		else
			printf("     ");

	if (j == 6)
		printf(" ");
	}
	printf(" ");
	for (j = 0; j < 16; j++)
	{
	if (j + i < size)
	{
		if (b[i + j] < 32 || b[i + j] > 126)
			printf("%c", '.');
		else
			printf("%c", *(b + i + j));
	}
		else
		printf(" ");
	}
	printf("\n");
	}
	if (size <= 0)
	{
		printf("\n");
		return;
	}
}

