#include "main.h"
#include <stdlib.h>

/**
 *_strdup - function that returns a pointer to a
 *newly allocated space in memory, which contains a copy
 *of the string given as a parameter.
 *@str: string
 *Return: pinter of an array of character
 **/

char *_strdup(char *str)
{
	char *strn;
	unsigned int i;
	int x;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x] != '\0'; x++)
		;
	strn = (char *)malloc(x + 1 * sizeof(char));
	if (strn != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			strn[i] = str[i];
	}
	else
		return (NULL);
	strn[i] = '\0';
	return (strn);
}
