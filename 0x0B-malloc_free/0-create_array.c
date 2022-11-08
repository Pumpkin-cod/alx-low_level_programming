#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes it
 * @size: size of array
 * @c: specific character to initialize array with
 * Return: pointer to array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(c));
	if (a == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		*(a + i) = c;
		i++;
	}
	return (a);
}
