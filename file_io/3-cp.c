#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer
 *
 * Return: A pointer to the newly-allocated buffer.
 */

void print_error(int err_code, const char *message, const char *file_name, int fd) {
	dprintf(STDERR_FILENO, "%s %s", message, file_name);
	if (fd != -1)
		dprintf(STDERR_FILENO, " fd %d", fd);
	dprintf(STDERR_FILENO, "\n");
	exit(err_code);
}

int main(int argc, char *argv[]) {
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3) {
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		print_error(98, "Error: Can't read from file", file_from, -1);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
		print_error(99, "Error: Can't write to file", file_to, -1);

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
			print_error(99, "Error: Can't write to file", file_to, fd_to);
	}

	if (bytes_read == -1)
		print_error(98, "Error: Can't read from file", file_from, fd_from);

	if (close(fd_from) == -1)
		print_error(100, "Error: Can't close fd", file_from, fd_from);

	if (close(fd_to) == -1)
		print_error(100, "Error: Can't close fd", file_to, fd_to);

	return 0;
}

