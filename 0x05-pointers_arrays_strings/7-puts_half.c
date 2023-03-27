#include "main.h"

/**
 * puts_half - print half of string
 * @str: string
 *
 **/

void puts_half(char *str)
{
	int n;
	int i;

	i = 0;
	while (i >= 0)
	{
		if (str[i] == '\0')
			break;
		i++;
	}
	if (i % 2 == 1)
		n = i / 2;
	else
		n = (i - 1) / 2;
	for (n++; n < i; n++)
		_putchar(str[n]);
	_putchar('\n');
}
