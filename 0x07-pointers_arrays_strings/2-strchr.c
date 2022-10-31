#include "main.h"

/**
 *_strchr - locates a character.
 *
 *@s: pointer that contains the address of the string
 *@c: character that needs to be located with in the string
 *
 *Return: a pointer to the char or null.
 */
char *_strchr(char *s, char c)
{
	char *i = s;

	while (*i != 0 && *i != c)
	{
		i++;
	}
	if (*i != c)
	{
		return (0);
	}
	return (i);
}
