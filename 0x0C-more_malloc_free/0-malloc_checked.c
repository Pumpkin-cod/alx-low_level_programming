#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Write a function that allocates memory.
 * @b: Size.
 *
 * Return: Pointer.
 */
void *malloc_checked(unsigned int b)
{
	int *c;

	c = malloc(b);

	if (c == NULL)
	{
		exit(98);
		return (NULL);
	}

	return (c);
