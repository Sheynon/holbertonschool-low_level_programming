#include "main.h"

/**
 * print_most_numbers - Function to execute in the program
 *
 * Description: Function to print numbers from 0 to 9
 * with the exception of the 2 and 4
 */

void print_most_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a == '2')
			continue;
		else if (a == '4')
			continue;
		else
			_putchar(a);
	}
	_putchar('\n');
}
