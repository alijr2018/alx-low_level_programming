#include "main.h"

/**
 * create_file - function that creates a file.
 *@filename: pointer
 *@text_content: pointer
 *Return: 1 on success, -1 on failure .
 **/


int create_file(const char *filename, char *text_content)
{
	int i, j, k;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (i == -1)
		return (i);

	k = 0;
	while  (text_content[k])
	{
		k++;
	}
	j = write(i, text_content, k);
	if (j == -1)
		return (-1);

	close(i);
	return (1);
}

