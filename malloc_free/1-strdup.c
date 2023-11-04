#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 *_strdup - returns a pointer to a newly space in memory
 *@str: string to copy
 *
 *Return: Returns NULL if str is  NULL
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int l;

	l = 0;

	for (l = 0; str[l] != '\0'; l++)
		;
	l = l + 1;
	copy = malloc(l * sizeof(char));
	
	if (l < 1)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	if (copy == NULL)
	{
		free(copy);
		return (NULL);
	}
	strcpy(copy, str);

	return (copy);


}
