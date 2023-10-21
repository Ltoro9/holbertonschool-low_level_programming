#include "main.h"
#include <stdio.h>

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		c = 1;
	}
	else
	{
		c = 0;
	}
	return (c);
}
