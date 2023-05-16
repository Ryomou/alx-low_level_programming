#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int m, n;

	if (height <= 0 || width <= 0)
		return (NULL);

	array = (int **) malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);
	for (m = 0; m < height; m++)
	{
		array[m] = (int *) malloc(sizeof(int) * width);
		if (array[m] == NULL)
		{
			free(array);
			for (n = 0; n <= m; n++)
				free(array[n]);
			return (NULL);
		}
	}

	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
		{
			array[m][n] = 0;
		}
	}
	return (array);
}

