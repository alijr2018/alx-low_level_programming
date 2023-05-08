#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: pointer.
 * @text_content: pointer.
 * Return: Return: 1 on success and -1 on failure.
 **/

int append_text_to_file(const char *filename, char *text_content)
{
	int i, j, k;

	if (!filename)
		return (-1);

	i = open(filename, O_WRONLY | O_APPEND);

	if (i == -1)
		return (-1);
	k = 0;
	if (text_content)
	{
		while (text_content[k])
			k++;

		j = write(i, text_content, k);
		if (j == -1)
			return (-1);
	}

	close(i);
	return (1);
}
