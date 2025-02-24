#include "main.h"

/**
 * print_line - Function to execute in the program
 * @n: Integrer to work with
 *
 * Description: Function to draw a straight line in the terminal
 */

void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
