#include "main.h"
/**
 *_strlen - return length of a string
 * @s : char
 *
 * Return : lenght of a string
 **/

int _strlen(char *s)
{
	int i;
	int x;

	x = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		x++;
	}
	return (x);
}
