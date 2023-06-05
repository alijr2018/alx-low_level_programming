#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

#define STDERR_FILENO 2
#define BUFFER_SIZE 1024
#include "main.h"

/**
 * main -
 *
 * Return:
 **/

void error_exit(const char *message, const char *filename, int code)
{
	write(STDERR_FILENO, message, strlen(message));
	write(STDERR_FILENO, filename, strlen(filename));
	exit(code);
}

void int_to_str(int value, char *str)
{
	int num = value;
	int count = 0;
	int i;

	while (num != 0)
	{
		num /= 10;
		count++;
	}

	for (i = count - 1; i >= 0; i--)
	{
		str[i] = '0' + (value % 10);
		value /= 10;
	}
	str[count] = '\0';
}

int main(int argc, char *argv[])
{
	int fd_from, fd_to, ret;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", strlen("Usage: cp file_from file_to\n"));
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		write(STDERR_FILENO, "Error: Can't read from file ", strlen("Error: Can't read from file "));
		write(STDERR_FILENO, argv[1], strlen(argv[1]));
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
	{
		write(STDERR_FILENO, "Error: Can't write to ", strlen("Error: Can't write to "));
		write(STDERR_FILENO, argv[2], strlen(argv[2]));
		exit(99);
	}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			write(STDERR_FILENO, "Error: Can't write to ", strlen("Error: Can't write to "));
			write(STDERR_FILENO, argv[2], strlen(argv[2]));
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		write(STDERR_FILENO, "Error: Can't read from file ", strlen("Error: Can't read from file "));
		write(STDERR_FILENO, argv[1], strlen(argv[1]));
		exit(98);
	}
	ret = close(fd_from);
	if (ret == -1)
	{
		char fd_str[12];
		int_to_str(fd_from, fd_str);
		write(STDERR_FILENO, "Error: Can't close fd ", strlen("Error: Can't close fd "));
		write(STDERR_FILENO, fd_str, strlen(fd_str));
		exit(100);
	}
	ret = close(fd_to);
	if (ret == -1)
	{
		char fd_str[12];
		int_to_str(fd_to, fd_str);
		write(STDERR_FILENO, "Error: Can't close fd ", strlen("Error: Can't close fd "));
		write(STDERR_FILENO, fd_str, strlen(fd_str));
		exit(100);
	}
	return (0);
}
