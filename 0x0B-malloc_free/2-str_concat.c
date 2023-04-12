#include "main.h"
#include <stdlib.h>

/**
 *str_concat -  function that concatenates two strings.
 *@s1: first string
 *@s2:sesond string
 *Return: pointer should point to a newly allocated
 *space in memory which contains the contents of s1,
 * followed by the contents of s2
 **/

char *str_concat(char *s1, char *s2)
{
	char *strn;
	unsigned int i, x, y, z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (x = 0; s1[x] != '\0'; x++)
		;
	for (y = 0; s2[y] != '\0'; y++)
		;
	strn = (char *)malloc((x + y + 1) * sizeof(char));
	if (strn == NULL)
	{
		free(strn);
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		strn[i] = s1[i];
	for (z = 0; s2[z] != '\0'; i++)
	{
		strn[i] = s2[z];
		z++;
	}
	return (strn);

}
