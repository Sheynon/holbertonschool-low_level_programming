#include "main.h"

/**
 * more_numbers - Function to execute in the program
 *
 * Description: Function to print numbers from 0 to 14
 */

void more_numbers(void)
{
	int a, b;

	for (b = 0; b <= 9; b++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a >= 10)
				_putchar('1');
		_putchar(a % 10 + '0');
		}
	_putchar('\n');
	}
}
