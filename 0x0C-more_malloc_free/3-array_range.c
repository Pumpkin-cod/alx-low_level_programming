#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Function that creates an array based on min and max values
 * @min: The lower end of the array
 * @max: The upper end of the array
 * Return: Pointer a
 */
int *array_range(int min, int max)
{
	int *a = NULL;
	int count, i;

	if (min > max)
		return (NULL);

	count = (max - min) + 1;

	a = malloc(sizeof(int) * count);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < count; i++, min++)
		a[i] = min;

	return (a);
}
