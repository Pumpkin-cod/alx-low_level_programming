
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees dog structure variables.
 * @d: pointer to dog variable.
 *
 * Return: void.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}

