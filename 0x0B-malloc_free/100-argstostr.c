#include "main.h"
#include<stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: arguments
 * Return: a pointer to a new string, or NULL if it fails
 **/

char *argstostr(int ac, char **av)
{
	int i, j;
	char *var = NULL;
	int x, y;

	x = 0;
	y = 0;
	if ((ac == 0 || av == NULL) && var == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			y++;
		}
	}

	var = (char *)malloc(y + ac + 1 * sizeof(char));
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			var[x] = av[i][j];
			x++;
		}
		var[x] = '\n';
		x++;
	}
	var[x] = '\0';
	return (var);
}
