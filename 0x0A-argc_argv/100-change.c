#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * main - program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 * Return: always 0 for sucess
 **/

int main(int argc, char *argv[])
{
	int i, change;
	int cents[] __attribute__((unused)) = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	if (change < 0)
	{
		printf("0\n");
	}
	else
		for (i = 0; change > 0; i++)
		{
			if (change - 25 >= 0)
				change = change - 25;
			else if (change - 10 >= 0)
				change = change - 10;
			else if (change - 5 >= 0)
				change = change - 5;
			else if (change - 2 >= 0)
				change = change - 2;
			else if (change - 1 >= 0)
				change = change - 1;
		}
	printf("%d\n", i);
	return (0);
}
