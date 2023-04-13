#include "main.h"
#include <stdlib.h>
/**
  * malloc_checked- A function that allocates memory using malloc
  * @b: size of mamory allocated
  * Return: pointer to memory location otherwise NULL
  */

void *malloc_checked(unsigned int b)
{
	void *check;

	check = malloc(b);
	if (check == NULL)
		exit(98);
	return (check);
}
