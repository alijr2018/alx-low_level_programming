#include "main.h"
#include <stdio.h>
#include<stdlib.h>

/**
 * main - program that add two numbers.
 * @argc:argc parameter
 * @argv: an array of a command listed
 * Return: 0 for sucess
 **/

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
