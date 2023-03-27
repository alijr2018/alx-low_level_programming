#include "main.h"
/**
 * swap_int fuction swaps the values ot int
 *
 * Return : void
 **/

void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
