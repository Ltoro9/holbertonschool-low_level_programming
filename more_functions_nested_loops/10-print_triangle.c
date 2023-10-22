#include "main.h"
#include <stdio.h>
/**
*print_triangle - Prints trianlges with #
*@size: size of the triangle( its boxed in a l*l size)
*/
void print_triangle(int size)
{
	int l, spc, tag;

	if (size <= 0)
		_putchar('\n');
	else
		for (l = 1; l <= size; l++)
		{
			for (spc = size - l; spc > 0; spc--)
			{
				_putchar(' ');
			}
			for (tag = 0; tag < l; tag++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
}
