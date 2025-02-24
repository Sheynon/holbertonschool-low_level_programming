#include "main.h"

/**
 * print_triangle - Function to execute in the program
 * @size: Integrer to use
 *
 * Description: Function to print a triangle
 */

void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');

	for (a = 0; a < size; a++)
		for (b = 0; b < size - a - 1; b++)
			_putchar(' ');
		for (b = 0; b <= a; b++)
			_putchar('#');
		_putchar('\n');
}
