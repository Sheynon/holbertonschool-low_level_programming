#include "main.h"

/**
 * print_diagonal - Function to execute in the program
 * @n: integrer to work with
 *
 * Description: Function to draw a diagonal line
 */

void print_diagonal(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
