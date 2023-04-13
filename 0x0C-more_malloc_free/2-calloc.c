#include "main.h"
#include<stdlib.h>

/**
 * _calloc -  function that allocates memory for an array, using malloc.
 * @nmemb: type
 * @size: type
 * Return: pointer to array
**/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *all;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	all = malloc(nmemb * size);
	if (all == NULL)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		all[i] = 0;
		i++;
	}
	return (all);

}
