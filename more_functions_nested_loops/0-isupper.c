#include "main.h"
#include <stdio.h>
/**
 * _isupper - Determine if c is upper case
 *
 * Return: c value 1 for upper or 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = 1;
	}
	else
	{
		c = 0;
	}
	return (c);
}
