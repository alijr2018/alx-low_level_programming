#include "main.h"
#include<string.h>
/**
 * _strncat - function that concatenantes two strings
 * @dest:string
 * @src:string
 * @n: numbre
 * Return: a pointer to the resulting string dest
 **/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = strlen(dest);
	while (i < n && *src)
	{
		dest[j + i] = *src;
		src++;
		i++;
	}
	return (dest);
}
