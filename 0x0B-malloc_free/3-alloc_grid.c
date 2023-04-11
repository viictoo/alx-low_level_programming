#include "main.h"

/**
  * alloc_grid - A function that returns a pointer to 2d array of integers
  * @width: howizontal array
  * @height: Vertical Array
  * Return: pointer to array otherwise NULL
  */

int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
		return (NULL);

	int **ptr = (int **)malloc(height * sizeof(int *));

	if (ptr == NULL)
		return (NULL);

	int i, j;

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *) malloc(width * sizeof(int));
		if (ptr[i] == NULL)
			return (NULL);


	for (j = 0; j < width; j++)
	{
		ptr[i][j] = 0;
	}
	}


	return (ptr);
}

