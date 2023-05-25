#include "main.h"

/**
 * main - program that copies the content of a file to another file.
 **/

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

void error_exit(const char *message, const char *filename, int code) {
    dprintf(STDERR_FILENO, message, filename);
    exit(code);
}

int main(int argc, char *argv[]) {
    int fd_from, fd_to, ret;
    char buffer[BUFFER_SIZE];
    ssize_t bytes_read, bytes_written;

    if (argc != 3) {
        error_exit("Usage: cp file_from file_to\n", "", 97);
    }

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1) {
        error_exit("Error: Can't read from file %s\n", argv[1], 98);
    }

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
    if (fd_to == -1) {
        error_exit("Error: Can't write to %s\n", argv[2], 99);
    }

    while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written == -1) {
            error_exit("Error: Can't write to %s\n", argv[2], 99);
        }
    }

    if (bytes_read == -1) {
        error_exit("Error: Can't read from file %s\n", argv[1], 98);
    }

    ret = close(fd_from);
    if (ret == -1) {
        error_exit("Error: Can't close fd %d\n", argv[1], 100);
    }

    ret = close(fd_to);
    if (ret == -1) {
        error_exit("Error: Can't close fd %d\n", argv[2], 100);
    }

    return 0;
}
