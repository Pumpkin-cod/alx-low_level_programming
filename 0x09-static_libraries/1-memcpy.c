#include "main.h"

/**
 *_memcpy - copies n bytes from src to dest.
 *@dest: pointer that we will copy data from.
 *@src: pointer that we will copy from.
 *@n: amount of times the src information will be copied to dest
 *
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
