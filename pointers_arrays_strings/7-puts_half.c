#include "main.h"
/**
 *puts_half - prints half of a string.
 *
 *@str: string to be printed
 *
 */
void puts_half(char *str)
{
	int l, i, t;

	l = 0;
	t = 0;

	while (str[l] != '\0')
	{
		l++;
	}

	if (l % 2 == 0)
	{
		for (i = l / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (l % 2)
	{
		for (t = (l - 1) / 2; t < l - 1; t++)
		{
			_putchar(str[t + 1]);
		}
	}
	_putchar('\n');
}
