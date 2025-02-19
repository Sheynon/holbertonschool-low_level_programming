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
	char a = 'a';
	char A = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	while (A <= 'Z')
	{
		putchar(A);
		A++;
	}

	putchar('\n');
	return (0);
}
