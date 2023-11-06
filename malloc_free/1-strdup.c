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

	int l = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}

	copy = malloc(l + 1);

	if (copy == NULL)
	{
		free(copy);
		return (NULL);
	}
	strcpy(copy, str);

	return (copy);


}
