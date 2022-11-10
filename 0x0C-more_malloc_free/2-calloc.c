#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Program that allocates an array of nmemb elements of size bytes
 * @nmemb: Number of array elements
 * @size: Size of each element, in bytes
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *a = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		a[i] = 0;

	return (a);
}
