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
	int i;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		i = atoi(argv[1]) + atoi(argv[2]);
		printf("%d\n", i);
		return (0);
	}
}
