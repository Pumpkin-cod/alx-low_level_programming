#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _realloc - Realloc the space of memory.
  * @ptr: Old array.
  * @old_size: Size of the first array.
  * @new_size: Size of the new array.
  * Return: New array.
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *tmp;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		tmp = malloc(new_size);
		if (tmp == NULL)
			return (NULL);
		return (tmp);
	}
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		tmp = malloc(new_size);
		if (tmp == NULL)
			return (NULL);
		for (i = 0; i < old_size; i++)
			((char *)tmp)[i] = ((char *)ptr)[i];
		free(ptr);
		return (tmp);
	}
	else
	{
		tmp = malloc(new_size);
		if (tmp == NULL)
			return (NULL);
		for (i = 0; i < new_size; i++)
		{
			((char *)tmp)[i] = ((char *)ptr)[i];
		}
		free(ptr);
		return (tmp);
	}
	return (NULL);
}
