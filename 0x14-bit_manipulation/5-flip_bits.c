#include "main.h"

/**
 * flip_bits - function that returns the number of
 * bits you would need to flip to get from one number to another.
 * @n: number
 * @m: number
 * Return: the number of bits you would need to flip
 * to get from one number to another.
 **/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	int a;

	i = n ^ m;
	for (a = 0; i; a++)
	{
		i &= (i - 1);
	}
	return (a);
}

