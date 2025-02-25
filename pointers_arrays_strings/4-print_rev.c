#include "main.h"

/**
 * print_rev - function to execute in the program
 * @s: first integrer
 *
 * Description: Function to print in reverse a string
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	while (a > 0)
	{
		_putchar(s[a]);
		a--;
	}
	_putchar('\n');
}
