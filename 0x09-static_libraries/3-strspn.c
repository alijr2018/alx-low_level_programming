#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *@s: string to check
 *@accept: substring of chars
 *
 *Return: the number of bytes in the initial segment
 *of s which consist only of bytes from accept
 **/
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int now;
	int first;

	now = 0;
	while (*s)
	{
		i = 0;
		first = now;
		while (*(accept + i) != '\0')
		{
			if (*(accept + i) == *s)
				now++;
			i++;
		}
		if (first == now)
			break;
		s++;
	}
	return (now);
}
