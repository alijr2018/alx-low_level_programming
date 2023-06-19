#include "main.h"

/**
 * _memset - a function that fills memory
 * @s: pointer to start of memory area
 * @b: constante byte to fill with
 * @n: num bytes to fill in
 *
 * Return: pointer to the memory area s
 **/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *from = s;

	i = 0;
	while (i < n)
	{
		*s++ = b;
		i++;
	}
	return (from);
}
