#include "main.h"
/**
 **_strcpy - copies the string pointed to by src
 *
 *Return: the pointer to dest
 *
 *@dest: first variable
 *
 *@src: second variable
 */
char *_strcpy(char *dest, char *src)
{
	int i, l;

	l = 0;
	for (i = 0; i < l && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i >= l; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
