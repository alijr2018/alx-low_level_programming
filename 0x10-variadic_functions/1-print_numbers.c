#include "variadic_functions.h"

/**
 *print_numbers - function that prints numbers, followed by a new line.
 *@separator:is the string to be printed between numbers.
 *@n: is the number of integers passed to the function.
 *Return: numbers, followed by a new line.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list list;

	va_start(list, n);
	if (separator == NULL || *separator == 0)
		s = "";
	else
		s = (char *) separator;
	if (n > 0)
		printf("%d", va_arg(list, int));
	for (i = 0; i < n; i++)
	{
		printf("%s%d", s, va_arg(list, int));
	}
	printf("\n");
	va_end(list);
}
