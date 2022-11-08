#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argv: array of pointers to strings
 * @argc: argument count
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, j, z;
	int sum = 0;

	for (j = 1; j < argc; j++)
	{
		for (z = 0; argv[j][z] != '\0'; z++)
		{
			if (argv[j][z] < '0'
			    || argv[j][z] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
		sum += atoi(argv[i]);
	printf("%d\n", sum);
	return (0);
}
