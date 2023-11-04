#include <stdlib.h>
#include <string.h>
/**
 *str_concat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *
 *Return: return the concatenated string, return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *result;

	size_t len1, len2, total_len;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	total_len = len1 + len2;

	result = malloc(total_len + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);

	strcat(result, s2);

	return (result);
}
