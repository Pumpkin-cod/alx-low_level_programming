#include <stdio.h>

/**
  * main - Prints 3 combination of numbers
  *
  * Return: Always (Success)
  */
int main(void)
{
        int a, i, x;

        for (a = '0'; a <= '9'; a++)
        {
                for (i = '0'; i <= '9'; i++)
                {
                        for (x = '0'; x <= '9'; x++)
                        {
                                if (a < i && i < x)
                                {
                                        putchar(a);
                                        putchar(i);
                                        putchar(x);

                                        if (a != '7')
                                        {
                                                putchar(',');
                                                putchar(' ');
                                        }
                                }
                        }
                }
        }
        putchar('\n');

	    return (0);
}
