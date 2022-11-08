#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: pointer to pointer to first element in array of pointers
 *
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *a;
	int i, y, j, z, p;
	int len = 0;

	if (ac == 0 || av ==  NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (y = 0; av[i][y] != '\0'; y++)
			len++;
	}
	a = malloc((len + (ac + 1)) * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	j = 0;
	p = 0;
	z = 0;
	while (j < len + ac)
	{
		if (av[p][z] != '\0')
		{
			a[j] = av[p][z];
			j++;
			z++;
		}
		else
		{
			a[j] = '\n';
			p++;
			j++;
			z = 0;
		}
	}
		a[j] = '\0';
		return (a);
}
