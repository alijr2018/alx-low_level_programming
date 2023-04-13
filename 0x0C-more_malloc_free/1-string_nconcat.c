#include"main.h"
#include<stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: First string
 * @s2: String to add to end of s1
 * @n: Amount of s2 to add to s1
 *
 * Return: pointer to new area in memory, NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len, size;
	char *all;

	if (s1 == NULL)
	s1 =  "";

	if (s2 == NULL)
	s2 = "";

	len = 0;
	while (s1[len] != '\0')
	len++;
	size = (len + n) * sizeof(*all);
	all = malloc(size + 1);
	i = 0;
	while (i < size && s1[i] != '\0')
	{
		all[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < size && s2[j] != '\0')
	{
		all[i] = s2[j];
		j++;
		i++;
	}
	return (all);

}
