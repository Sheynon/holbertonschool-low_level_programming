#include "main.h"

/**
 * print_diagonal - Function to execute in the program
 * @n: integrer to work with
 *
 * Description: Function to draw a diagonal line
 */

void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; j < a; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
