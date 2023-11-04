#include "main.h"
#include <stdlib.h>
/**
 *create_array - creates an array of chars
 *@size: size of the memory to print
 *@c: char to initialize the array
 *Return: returns a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *p = (char *)malloc(size * sizeof(char));

	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
