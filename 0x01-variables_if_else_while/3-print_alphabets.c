#include <stdio.h>

/**
 * main - Prints the alphabets in lower and upper case
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}


	return (0);
}
