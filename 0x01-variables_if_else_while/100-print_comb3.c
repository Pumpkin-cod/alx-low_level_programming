#include <stdio.h>

/**
  * main - Prints the numbers from 00 to 99
  *
  * Return: 0 (Success)
  */
int main(void)
{
	int a, i;

	a = i = '0';

	for (a = '0'; a <= '9'; a++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			putchar(a);
			putchar(i);

			if ((a != '9') || (a == '9' && i != '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
