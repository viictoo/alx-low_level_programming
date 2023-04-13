#include "main.h"

/**
  * _calloc-A funtion that allocates memory for an array
  * @nmemb: number of array elements
  * @size: size in bytes of array elements
  * Return: pointer to allocated memory otherwise 0
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	while ((nmemb * size)-- > 0)
	{
		*ptr++ = 0;
	}

	/*memset(ptr, 0, nmemb * size);*/

	return (ptr);
}

