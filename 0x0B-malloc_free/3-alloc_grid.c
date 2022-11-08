#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2-D array of ints
 * @width: width of array, number of columns
 * @height: height of array, number of rows
 *
 * Return: pointer to 2-D array
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(height * sizeof(int *));
		if (a == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < height; i++)
		{
			a[i] = malloc(width * sizeof(int));
			if (a[i] == NULL)
			{
				while (i >= 0)
				{
					free(a[i]);
					i--;
				}
				free(a);
				return (NULL);
			}
		}
		for (j = 0; j < height; j++)
		{
			for (k = 0; k < width; k++)
				a[j][k] = 0;
		}
		return (a);
}
