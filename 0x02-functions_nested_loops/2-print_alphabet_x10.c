#include "main.h"
/**
*Description:print_alphabet_x10 - prints the alphabet 10 times
*Return: x10 a-z
*/
void print_alphabet_x10(void)
{
int n, multi;
multi = 0;
while (multi < 10)
{
for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
multi++;
_putchar('\n');
}
}
