#include<main.h>

/**
 * main - prints _putchar
 *
 * Description: prints _putchar
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char c[9] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(c[i]);
	_putchar('\n');
	return (0);
}
