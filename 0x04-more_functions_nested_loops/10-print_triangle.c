#include "main.h"
/**
 * print_triangle - check for a digit
 * @size : integer type
 * Return:void
 */

void print_triangle(int size)
{
	int i;
	int x;

	i = 1;
	while (i <= size && size > 0)
	{
		x = 0;
		while (x < size - i)
		{
			_putchar(' ');
			x++;
		}
		x = 0;
		while (x < i)
		{
			_putchar('#');
			x++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 1)
		_putchar('\n');
}
