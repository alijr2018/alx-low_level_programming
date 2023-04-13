#include "main.h"
#include<stdlib.h>

/**
 * malloc_checked - function that alocate memory using malloc
 * @b: size of memory to be allocated
 * Return: pointer to allocated memory
 **/

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
