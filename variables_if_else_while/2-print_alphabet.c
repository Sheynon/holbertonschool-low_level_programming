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
	for (char a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
