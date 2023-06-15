#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - generates a key for a given input using codex
 * @ac: argument count.
 * @av: vector array of arguments.
 * Return: Always 0.
 */

int main(__attribute__((unused))int ac, char *av[])
{
	int size = strlen(av[1]);
	int i, tmp;
	char key[7], *rose;

	rose = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	tmp = (size ^ 59) & 63;
	key[0] = rose[tmp];
	tmp = 0;
	for (i = 0; i < size; i++)
		tmp += av[1][i];
	key[1] = rose[(tmp ^ 79) & 63];
	tmp = 1;
	for (i = 0; i < size; i++)
		tmp *= av[1][i];
	key[2] = rose[(tmp ^ 85) & 63];

	tmp = 0;
	for (i = 0; i < size; i++)
	{
		if (av[1][i] > tmp)
			tmp = av[1][i];
	}
	srand(tmp ^ 14);
	key[3] = rose[rand() & 63];
	tmp = 0;
	for (i = 0; i < size; i++)
		tmp += (av[1][i] * av[1][i]);
	key[4] = rose[(tmp ^ 239) & 63];

	for (i = 0; i < av[1][0]; i++)
		tmp = rand();
	key[5] = rose[(tmp ^ 229) & 63];
	key[6] = '\0';
	printf("%s", key);
	return (0);
}
