#include "main.h"

/**
  * _memset- A function that fills the first n bytes of memory area pointed
  * to by s with the constant byte b
  * @n: no of bytes to fill
  * @s: memory area
  * @b: constant byte
  * Return: pointer to memory area s
  */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	char *r = s;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (r);
}
