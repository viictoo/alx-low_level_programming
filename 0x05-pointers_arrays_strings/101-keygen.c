#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main-A program that generates random valid passwords
  *
  * Return: (exit success)
  */

int main(void)
{
	int i, len, ascii;
	char password[100];

	srand(time(NULL));

	len = rand() % 11 + 8;

	for (i = 0; i < len; i++)
	{
		ascii = rand() % 94 + 33;

	if (ascii == 34 || ascii == 39 || ascii == 92)
		ascii++;
	password[i] = ascii;
	}

	password[len] = '\0';

	printf("Generated password: %s\n", password);

	return (0);
}

