#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to newly allocated space
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	unsigned int i, j, k, p, combolen;
	unsigned int len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	j = 0;
	while (*(s1 + j) != '\0')
	{
		len1++;
		j++;
	}
	k = 0;
	while (*(s2 + k) != '\0')
	{
		len2++;
		k++;
	}
	combolen = len1 + len2;
	a = malloc((combolen + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		*(a + i) = *(s1 + i);
		i++;
	}
	j = len1;
	p = 0;
	while (j < combolen)
	{
		*(a + j) = *(s2 + p);
		j++;
		p++;
	}
	*(a + combolen) = '\0';
	return (a);
}
