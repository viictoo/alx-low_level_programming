#include "main.h"

/**
  * alloc_grid - A function that returns a pointer to 2d array of integers
  * @width: howizontal array
  * @height: Vertical Array
  * Return: pointer to array otherwise NULL
  */

int **alloc_grid(int width, int height)
{
	int **ptr, i, j, p;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *) malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (p = 0; p < i; p++)
			{
				free(ptr[p]);
			}
			free(ptr);
			return (NULL);
		}


	for (j = 0; j < width; j++)
	{
		ptr[i][j] = 0;
	}
	}


	return (ptr);
}

