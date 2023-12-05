#include "main.h"

/**
 * append_text_to_file - append text at the end of a file
 * @filename: name of the file
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int archivo, i = 0;

	if (filename == NULL)
		return (-1);

	archivo = open(filename, O_WRONLY | O_APPEND);
	if (archivo == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
	}

	write(archivo, text_content, i);

		close(archivo);
	return (1);
}

