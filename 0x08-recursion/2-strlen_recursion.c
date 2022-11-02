#include "holberton.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s:string
 * Return:length of string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (0);
	}
	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(++s);
		return (len);
	}
	return (0);
}
