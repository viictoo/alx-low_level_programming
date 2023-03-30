#include "main.h"
#include <string.h>

/**
  * infinite_add-A function that adds two numbers
  * @r: is the buffer that will store the result
  * @size_r: is the buffer size
  * @n1: strings with only digits and never empty
  * @n2: same as n1
  * Return: pointer to the result or 0 if cannot be stored in r
  */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	unsigned int num_n1, num_n2;
	unsigned int over = 0, sum = 0;
	int i = len1 - 1, j = len2 - 1;
	int x = 0;
	char temp;

	if (len1 > size_r - 1 || len2 > size_r - 1)
		return (0);

	while (i >= 0 || j >= 0)
	{
		if (i >= 0)
			num_n1 = n1[i] - '0';
		else
			num_n1 = 0;
		if (j >= 0)
			num_n2 = n2[j] - '0';
		else
			num_n2  = 0;
		sum = num_n1 + num_n2 + over;
		over = sum / 10;
		sum = sum % 10;
		r[x++] = sum + '0';
		i--;
		j--;
	}
	if (over > 0)
	{
		if (x >= size_r - 1)
			return (0);
		r[x++] = over + '0';
	}
	for (i = 0, j = x - 1; i < j; i++, j--)
	{
		temp = r[i];
		r[i] = r[j];
		r[j] = temp;
	}
	r[x] = '\0';
	 return (r);
}

