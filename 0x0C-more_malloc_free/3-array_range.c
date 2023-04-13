#include "main.h"
#include<stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: values
 * @max: values
 * Return: the pointer to the newly created array
 **/

int *array_range(int min, int max)
{
	int *all;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	all = malloc(sizeof(int) * (max - min + 1));
	if (all == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (min <= max)
	{
		all[i] = min;
		min++;
		i++;
	}
	return (all);

}
