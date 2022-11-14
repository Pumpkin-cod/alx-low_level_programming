#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to variable to be initialized
 * @name: name to initialize the variable with in field name
 * @age: age to initialize the variable with in field age
 * @owner: name of the owner to initialize the variable in field owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
