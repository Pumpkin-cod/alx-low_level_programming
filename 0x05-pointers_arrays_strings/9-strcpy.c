#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: what we copy the string from
 * @src: String to be copied
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
