#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 * Return: 0 if big endian,  if little endian
 **/

int get_endianness(void)
{
	int i;

	i = 1;
	if (*(char *)&i)
		return (1);
	else
		return (0);
}
