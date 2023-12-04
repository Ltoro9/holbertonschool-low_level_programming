#include "main.h"
#include <stdio.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *archivo = fopen("filename.txt", "r");
	char *content;

	if (filename == NULL)
		return (1);

	content = malloc(letters + 1);
		
	if (content == NULL)
	{
		fclose(archivo);
		return (1);
	}

	fread(content, 1, letters, archivo);
	fwrite(content, 1, letters, stdout);

	free(content);
	fclose(archivo);
	return (0);
}

