#include <stdio.h>
/**
 * main - Prints out the larget prime factor of 612852475143
 * Return:return 0 with success.
 */
int main(void)
{
	long a;
	long num = 612852475143;

	for (a = 2; a < num; a++)
	{
		if (num % a == 0)
			num /= a;
	}
	printf("%li\n", num);
	return (0);
}
