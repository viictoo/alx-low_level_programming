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
	char *new_ptr, *temp_ptr;
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
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	temp_ptr = ptr;

	while (i < old_size && i < new_size)
	{
		*(new_ptr + i) = *(temp_ptr + i);
		i++;
	}

	free(ptr);

	return (new_ptr);
}
