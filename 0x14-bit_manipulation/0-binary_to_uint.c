#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: pointer
 * Return: the converted number, or 0
 * if there is one or more chars in the string b that is not 0 or 1 b is NULL.
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j;
	int a;

	if (b == NULL)
		return (0);

	a = 0;
	while (b[a])
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
		a++;
	}

	for (i = 0, j = 1, a--; a >= 0; a--, j *= 2)
	{
		if (b[a] == '1')
			i += j;
	}

	return (i);

}
