#include "main.h"

/**
 * print_last_digit - function to print the last digit of a number
 * @a: integrer to print
 *
 * Description: function to print the last digit of a number
 *
 * Return: Always b (success)
 */

int print_last_digit(int a)
{
	int b = a % 10;

	_putchar(b);
	return (b);
}

