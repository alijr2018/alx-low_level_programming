#include "main.h"
/**
 * print_square - check for a digit
 * @n: number of _ to be printed
 * Return: void
 */

void print_square(int n)
{
	int i;
	int x;

	i = 0;
	while (i < n && n > 0)
	{
		x = 0;
		while (x < n)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
