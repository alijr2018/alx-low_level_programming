#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * standard output.
 * @filename: characther to pointer.
 * @letters: size of letter.
 * Returns: the actual number of letters it could read and print.
**/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	char *a;
	ssize_t r, w;

	i = open(filename, O_RDONLY);
	if (!filename)
		return (0);
	if (!i)
		return (0);

	a = malloc(sizeof(char) * (letters));

	if (!a)
		return (0);

	r = read(i, a, letters);
	w = write(STDOUT_FILENO, a, r);	

	close(i);
	free(a);

	return (w);

}
