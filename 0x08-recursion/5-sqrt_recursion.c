#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: base number
 *
 * Return: return square root of n
 **/

int _sqrt_recursion(int n)
{
	return (asqrt(n, 1));
}

/**
 * asqrt - _sqrt_recursion
 * @n: parametre
 * @i: parametre
 *
 * Return: sqrt
 **/

int asqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if ((i * i) == n)
		return (i);
	return (asqrt(n, i + 1));
}
