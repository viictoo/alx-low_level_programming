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
	char *set;
	int size_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	size_ptr  = nmemb * size;

	ptr = malloc(size_ptr);

	if (ptr == NULL)
		return (NULL);

	set = ptr;
	while (size_ptr-- > 0)
	{
		*set++ = 0;
	}

	/*memset(ptr, 0, nmemb * size);*/

	return (ptr);
}

