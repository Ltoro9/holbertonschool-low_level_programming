#include "main.h"
#include <string.h>

/**
 * create_file - function that create file
 * @filename: name of file to create
 * @text_content:  is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”,
 */
int create_file(const char *filename, char *text_content)
{
    int archivo, rw;

    if (filename == NULL)
        return (-1);

    archivo = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

    if (archivo == -1)
        return (-1);

    if (text_content == NULL)
        text_content = "";

    rw = (int)write(archivo, text_content, strlen(text_content));

    if (rw == -1)
    {
        close(archivo);
        return (-1);
    }

    close(archivo);

    return (1);
}
