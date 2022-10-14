#include <stdio.h>

/**
  * main - Prints numbers from 0 to 9
  *
  * Return: 0 (Success)
  */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}

	putchar('\n');

	return (0);
}
