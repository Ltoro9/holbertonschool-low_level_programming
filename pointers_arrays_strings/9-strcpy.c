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
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
		dest[i] = '\0';
	

	return (dest);
}
