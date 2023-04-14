#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

/**
 * mul - Multiplies two numbers
 * @num1: First number
 * @num2: Second number
 * @len1: Length of first number
 * @len2: Length of second number
 * Return: Result of multiplication as a string
 */
char *mul(char *num1, char *num2, int len1, int len2)
{
	int *res = calloc(len1 + len2, sizeof(int)), i, j, carry, n1, n2;
	char *str;

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = num1[i] - '0';
		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			res[i + j + 1] += n1 * n2 + carry;
			carry = res[i + j + 1] / 10;
			res[i + j + 1] %= 10;
		}
		res[i + j + 1] += carry;
	}
	for (i = 0; i < len1 + len2 && !res[i]; i++)
		;
	str = malloc(sizeof(char) * (len1 + len2 - i + 1));
	if (str == NULL)
	{
		free(res);
		return (NULL);
	}
	for (j = 0; i < len1 + len2; j++, i++)
		str[j] = res[i] + '0';
	str[j] = '\0';
	free(res);
	return (str);
}

/**
 * main - Entry point. Multiplies two positive numbers.
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: Always 0 (success) or 98 (failure)
 */
int main(int argc, char *argv[])
{
	int i, j, len1, len2;
	char *res;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	for (i = 1; i <= 2; i++)
	{
		for (j = 0; argv[i][j]; j++)
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (98);
			}
		if (argv[i][0] == '0' && argv[i][1] != '\0')
		{
			printf("Error\n");
			return (98);
		}
	}
	len1 = strlen(argv[1]);
	len2 = strlen(argv[2]);
	res = mul(argv[1], argv[2], len1, len2);
	if (res == NULL)
		return (98);
	printf("%s\n", res);
	free(res);
	return (0);
}

