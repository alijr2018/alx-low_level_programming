#include "main.h"
#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 *@argc: argc parameter
 *@argv: an array of a command listed
 *Return: 0 for success
 **/

int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
