#include "main.h"
/**
 *_strchr - locates a character in a string.
 *@s: string
 *@c: character
 *Return: Returns a pointer or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	char *ltNull = '\0';

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}

	if (c == '\0')
	{
		return (s);
	}

	return (ltNull);
}
