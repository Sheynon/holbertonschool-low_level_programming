#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be converted to binary
 */
void print_binary(unsigned long int n)
{
	int bit_position = sizeof(n) * 8 - 1;
	int started = 0;

	while (bit_position >= 0)
	{
		if (n & (1UL << bit_position))
		{
			_putchar('1');
			 started = 1;
		}
		else if (started)
		{
			_putchar('0');
		}
		bit_position--;
	}

	if (!started)
		_putchar('0');
}
