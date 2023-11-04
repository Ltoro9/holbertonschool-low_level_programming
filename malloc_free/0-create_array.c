#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - creates an array of chars
 *@size: size of the memory to print
 *@c: char to initialize the array
 *Return: returns a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return ('\0');
	}

	p = malloc(size * sizeof(char));

	if (*p == '\0')
	{
		return ('\0');
	}

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
