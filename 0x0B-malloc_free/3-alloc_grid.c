#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: the width of array
 * @height: the height of array
 * Return: NULL on failure
 **/

int **alloc_grid(int width, int height)
{
	int **matrice;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrice = (int **)malloc(height * sizeof(int *));
	if (matrice == NULL)
	{
		free(matrice);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		matrice[i] = (int *)malloc(width * sizeof(int));
		if (matrice[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(matrice[i]);
			free(matrice);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			matrice[i][j] = 0;
		}
	}

	return (matrice);
}
