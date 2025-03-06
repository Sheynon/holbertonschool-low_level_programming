#include "main.h"

/**
 * _print_rev_recursion
 * @s: First Integrer
 *
 * Description: Print a string in reverse
 */

void _print_rev_recursion(char *s)
{
	if (s == NULL)
		return;

	else if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
