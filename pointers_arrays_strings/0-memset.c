#include "main.h"
/**
 *_memset - fills memory with a constant byte
 *
 *@s: pointer
 *@b: byte of a specific character
 *@n: n byte
 *Return: l
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *l = s;

	while (n--)
	{
		*s = b;
		s++;
	}

	return (l);
}
