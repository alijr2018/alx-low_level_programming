#include "main.h"

/**
 *print_alphabet_x10 - prints the alphabet, in lowercase,10 times,
 *followed by a new line
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet_x10(void)
{
	int i;
	int k;

	k = 0;
	while (k <= 9)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		k++;
		_putchar('\n');
	}
	return (0);
}
