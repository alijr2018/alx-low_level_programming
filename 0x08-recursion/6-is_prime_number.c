#include "main.h"

/**
 *is_prime_number - function that returns 1
 *if the input integer is a prime number, otherwise return 0.
 *@n: number
 *
 * Return: 1 if is a prime numbre 0 if not
 **/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (is_it_multip(n, 2));
}
/**
 * is_it_multip - check if n is multiple
 * @n: numbre
 * @i: numbre
 * Return: 1 if n is prime 0 if not
 **/

int is_it_multip(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (is_it_multip(n, i + 1));
}
