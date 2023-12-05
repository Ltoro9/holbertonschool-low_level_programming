#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *read_textfile - function that reads a text file and prints it to the POSIX standard output
 *
 *@filename: a pointer to the name of the file.
 *@letters: the number of letters
 *
 *Return: the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *content;
	ssize_t bytes_read, archivo;

	content = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);


	if (content == NULL)
	{
		return (0);
	}

	archivo = open(filename, O_RDONLY);

	if (archivo == -1)
	{
		free(content);
		return (0);
	}


	bytes_read = read(archivo, content, letters);
	content[letters + 1] = '\0';

	write(STDOUT_FILENO, content, bytes_read);

	close(archivo);
	return (bytes_read);
}
