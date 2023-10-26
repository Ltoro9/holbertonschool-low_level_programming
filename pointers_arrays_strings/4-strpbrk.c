#include "main.h"
/**
 *_strpbrk - searches a string for any of a set of bytes.
 *@s: string
 *@a: @accept: stringcontaining the bytes to look for
 *Return: NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *ltNull = '\0';

	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}

		s++;
	}

	return (ltNull);
}
