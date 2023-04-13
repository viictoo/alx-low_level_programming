#include "main.h"

/**
  * _realloc-A function that reallocates a memory block using malloc and free
  * @ptr: pointer to memory previousely allocated using malloc
  * @old_size: size in bytes of tha allocated space for ptr
  * @new_size: new size in bytes of the new memory block
  * Return: pointer to memory location otherwise NULL
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newp;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		newp = malloc(new_size);
		if (newp == NULL)
			return (NULL);
	}

	newp = malloc(new_size);

	if (newp == NULL)
		return (NULL);

	while (i < old_size && i < new_size)
	{
		*(newp + i) = *(ptr + i);
		i++;
	}

	free(ptr);

	return (newp);
}
