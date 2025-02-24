#include "main.h"

/**
 * print_square - Function to execute in the program
 * @size: integrer to work with
 *
 * Description: Function to print a square
 */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('#');
		_putchar('\n');
	}
}
