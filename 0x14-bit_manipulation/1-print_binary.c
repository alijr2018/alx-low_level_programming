#include"main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number
 * Return: prints binary
 **/

void print_binary(unsigned long int n)
{
	unsigned long int i;
	int a, x, y;

	x = '1';
	y = '0';
	if (n == 1)
	{
		_putchar(x);
		return;
	}
	else if (n == 0)
	{
		_putchar(y);
		return;
	}
	for (i = n, a = 0; (i >>= 1) > 0; a++)
		;
	for ( ; a >= 0; a--)
	{
		if ((n >> a) & 1)
			_putchar(x);
		else
			_putchar(y);
	}
}

