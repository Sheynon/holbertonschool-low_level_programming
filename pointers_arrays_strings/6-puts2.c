#include "main.h"

/**
 * puts2 - Function to execute in the program
 * @str: first integrer
 *
 * Description: Function that prints every other character of a starting
 * start with the first character
 */

void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
		a++;
	}
	_putchar('\n');
}
