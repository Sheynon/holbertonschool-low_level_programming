#include <unistd.h>
#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description:
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}

	_putchar('\n');
}

