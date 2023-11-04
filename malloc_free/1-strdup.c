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
	if (str == NULL)
	{
		return (NULL);
	}
	copy = malloc(l * sizeof(char));

	if (copy == NULL)
	{
		free(copy);

	}
	strcpy(copy, str);

	return (copy);


}
