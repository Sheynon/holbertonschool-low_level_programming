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

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
