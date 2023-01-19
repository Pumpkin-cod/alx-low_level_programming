#include "main.h"

/**
 *_strpbrk - searches a string for any of a set of bytes
 *
 *@s:The string we look for occurences in.
 *@accept: the string to evaluate s
 *
 *Return: pointer to the byte or null.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != 0)
	{
		for (i = 0; accept[i] != 0; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
