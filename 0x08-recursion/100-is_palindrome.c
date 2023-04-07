#include "main.h"

/**
 * _strlen_recursion - size
 * @s: pointer to string params
 * Return: lenght
 **/

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * check - palindrome
 * @s: pointer to string
 * @l: position
 * Return:  similar character
 **/

int check(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}
	if (*s == *(s + l))
	{
		return (check(s + 1, l - 2));
	}
	return (0);
}

/**
 * is_palindrome - palindrome
 * @s: pointer to string
 * Return:  1 if a string is a palindrome and 0 if not.
 **/

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (check(s, len - 1));
}
