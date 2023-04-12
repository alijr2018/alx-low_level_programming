#include "main.h"
#include<stdlib.h>

/**
 * strtow - function that splits a string into words.
 * @str: string
 * Return: a pointer to an array of strings (words)
 **/


char **strtow(char *str)
{
	int i, l, j, k, count, m, n;
	char **p;
	char *x;

	l = 0,j = 0,i = 0;
    p = (char **)malloc((l + 1) * sizeof(char *));
	if ((*str == '\0' || str == NULL) && p == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && (str[i + 1] != ' ' || str[i + 1] == '\0'))
			l++;
	}

	for (n = 0; str[n] && j <= l; n++)
	{
		count = 0;
		if (str[n] != ' ')
		{
			for (i = n ; str[i] != '\0'; i++)
			{
				if (str[i] == ' ')
					break;
				count++;
			}
			p[j] = (char *)malloc((count + 1) * sizeof(char));
			if (p[j] == NULL)
			{
				for (k = 0; k <= j; k++)
				{
					x = p[k];
					free(x);
				}
				free(p);
				return (NULL);
			}
			for (m = 0; n < i; n++)
			{
				p[j][m] = str[n];
				m++;
			}
			p[j][m] = '\0';
			j++;
		}
	}
	p[j] = NULL;
	return (p);
}