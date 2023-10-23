#include "main.h"
/**
 *print_rev - prints a string in reverse.
 *
 *@s: string to be printed
 *
 */
void print_rev(char *s)
{
	int i, l;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (l = i; l >= 0; l--)
	{
		_putchar(s[l]);
	}
}
