#include "main.h"

/**
 * print_sign - Function to print the sign of a number
 * @n:
 *
 * Description: Function that print + if the var is bigger than 0
 * Print 0 if the var is exactly 0
 * Print - if the var is lower than 0
 *
 * Return: 1 if the if is true 0 if the else if is true.
 * -1 if the if and else if are both false.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
