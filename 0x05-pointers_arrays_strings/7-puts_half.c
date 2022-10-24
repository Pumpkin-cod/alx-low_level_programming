#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int a, n, i;

	a = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	if (a % 2 == 0)
	{
		for (i = a / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (a % 2)
	{
		for (n = (a - 1) / 2; n < a - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
