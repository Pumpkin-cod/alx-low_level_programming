#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: what we copy the string from
 * @src: String to be copied
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int a, i;

	a = 0;

	while (src[a] != '\0')
	{
		a++;
	}

	for (i = 0; i < a; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
