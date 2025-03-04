#include "main.h"

/**
 * print_chessboard - Function to execute in the program
 * @a: FIrst Integrer
 *
 * Description: Function that print a chessboard
 */

void print_chessboard(char (*a)[8])
{
	int b, c;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[b][c]);
		}
		_putchar('\n');
	}
}
