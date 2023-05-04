#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @index: number
 * @n: pointer
 * Return: 1 if it worked, or -1 if an error occurred.
 **/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;

	if (index > 64)
		return (-1);

	j = 1 << index;
	*n = *n & ~j;
	return (1);
}
