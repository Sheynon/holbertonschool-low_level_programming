#include "main.h"

/**
 * print_triangle - Function to execute in the program
 * @size: Integrer to use
 *
 * Description: Function to print a triangle
 */

void print_triangle(int size)
{
	int a;

	if (size <= 0)
		_putchar('\n');

	for (a = 0; a < size; a++)
	{
		for (b = 0; b <= size; b++)
			if (b < size)
				_putchar(' ');
			else
				_putchar('#');
				_putchar('\n');
	}
}
