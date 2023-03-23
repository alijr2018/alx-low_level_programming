#include "main.h"

/**
 * print_most_numbers - prints 0 - 9 except 2, 3
 * Description: prints
 * Return: void
 */

void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a != 2 && a != 4)
		{
			_putchar(a);
		}
	}
	_putchar('\n');
}
