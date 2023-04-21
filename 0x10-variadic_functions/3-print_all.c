#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format : format
*/

void print_all(const char * const format, ...)
{
	int i;
	int j;
	char *str;
	va_list list;

	va_start(list, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				j = 0;
				break;
			case 'i':
				printf("%i", va_arg(list, int));
				j = 0;
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				j = 0;
				break;
			case 's':
				str = va_arg(list, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				j = 0;
				break;
			default:
				j = 1;
				break;
		}
		if (format[i + 1] != '\0' && j == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(list);
}

