#include "main.h"

/**
 * get_bits - function that returns the value of a bit at a given index
 * @n: numbre
 * @index: function that returns the value of a bit at a given index
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);

	return ((n >> index) & 1);
}
