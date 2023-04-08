#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a character in a string
 * @s: string to check
 * @c: character to find in s
 * Return: pointer to the first occurrence of the characte
 **/

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	if (*(s + i) == c)
		return (s + i);
	return (NULL);
}
