#include "main.h"
#include <stdio.h>
/**
 *main -  print a number, followed by a new line
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: 0 for success
 **/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
