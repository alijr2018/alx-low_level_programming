#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array,
 *of integers using the Linear search algorithm.
 * @array: a pointer
 * @size: integer(nbr of element)
 * @value: ineteger(value)
 * Return: the first index where value is located
**/


int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", (unsigned long)i, array[i]);
		if (array[i] == value)
			return ((int)i);
	}
	return (-1);
}
