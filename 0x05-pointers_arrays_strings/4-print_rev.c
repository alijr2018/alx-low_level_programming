#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: string
 *
 **/
void print_rev(char *s)
{
	int i = 0;
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{}
	for (i = x - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
