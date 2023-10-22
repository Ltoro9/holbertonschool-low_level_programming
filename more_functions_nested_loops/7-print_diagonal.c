#include "main.h"
#include <stdio.h>
/**
*print_diagonal - Prints diagonal line on screen
*
*@n: number of diagonal lines to print
*/
void print_diagonal(int n)
{
	int x = 0, i, spc;
	int j = n - 1, k = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i <= n; i++)
	{
		for (; j >= x; x++)
		{
			for (; spc < k; spc++)
			{
				if (k == 0)
				{
				_putchar('\\');
				}
				else
					if (k != 0)
						_putchar(' ');
			}
				_putchar('\\');
				_putchar('\n');
				spc = 0;
				k++;
		}


	}

}
