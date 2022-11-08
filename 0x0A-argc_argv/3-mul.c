#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argv: array of pointers to strings
 * @argc: argument count
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
}
