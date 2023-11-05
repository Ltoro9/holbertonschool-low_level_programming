#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers
 *@width: width of grid
 *@height: height of grid
 *
 *Return: pointer to 2-D integer grid, NULL if failed
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = (int **)malloc(height * sizeof(int *));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(width * sizeof(int));

		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(ptr[j]);
			}
			free(ptr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{ptr[i][j] = 0;
		}
	}

	return (ptr);
}
