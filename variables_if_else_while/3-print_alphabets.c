#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Print the alphabet.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char a;

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	while (a <= 'Z')
	{
		putchar(a);
	}

	putchar('\n');
	return (0);
}
