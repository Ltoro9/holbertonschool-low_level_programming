#include "main.h"
/**
 *print_chessboard - prints the chessboard.
 *@a: 2d array
 *
 */
void print_chessboard(char (*a)[8])
{
	int i, l, pieza;

	for (i = 0; i < 8; i++)
	{

		for (l = 0; l < 8; l++)
		{
			pieza = (a[i][l]);
			_putchar(pieza);
		}
	_putchar('\n');
	}
}
