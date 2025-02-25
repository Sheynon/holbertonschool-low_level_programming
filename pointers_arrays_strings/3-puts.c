#include "main.h"

/**
 * _puts - Function to execute in the program
 * @str: First integrer
 *
 * Description: Function to print a string
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
