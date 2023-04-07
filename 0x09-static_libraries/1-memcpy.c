#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: pointer to dest str
 * @src: source to be copied from
 * @n: num bytes to copy from src
 *
 * Return: pointer to dest
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *from = dest;

	i = 0;
	while (i < n)
	{
		*dest++ = *src++;
		i++;
	}
	return (from);
}
