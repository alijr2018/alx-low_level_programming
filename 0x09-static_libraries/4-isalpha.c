#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character
 * @c: single letter input
 * Return: 1 if int c is lowercase, 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
