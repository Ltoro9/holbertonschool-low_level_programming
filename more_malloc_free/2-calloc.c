#include <stdio.h>
#include <stdlib.h>
/**
*_calloc- function that allocates memory for an array, using malloc
*
*@nmemb: number of elements in array
*@size: Byte syze of nmemb
*Return: pointer to memory allocated
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	size_t total_size = (size_t)nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	memset(ptr, 0, total_size);

	return (ptr);
}
