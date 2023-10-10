#include "search_algos.h"

/**
 * binary_search -  a function that searches for a value in a sorted array,
 * of integers using the Binary search algorithm.
 * @array: is a pointer
 * @size: int (nbr)
 * @value: int
 * Return: print the array being searched every time it changes.
 **/


int binary_search(int *array, size_t size, int value)
{
	int left;
	int right;
	int mid;
	size_t i;

	left = 0;
	right = size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= (size_t)right; i++)
		{
			if (i < (size_t)(right))
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
