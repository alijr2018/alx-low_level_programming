#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - print the summ of diagonals
 *@a: square matrix wich we print
 *@size: the matrix size
 **/

void print_diagsums(int *a, int size)
{
	int i;
	int sum2;
	int sum1;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + size - i - 1);
	}
	printf("%d, %d\n", sum1, sum2);
}
