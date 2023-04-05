#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by new line
 * @s: string
 *
 * Return: 
 **/

void _puts_recursion(char *s)
{
	while (s[0] != '\0')
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
