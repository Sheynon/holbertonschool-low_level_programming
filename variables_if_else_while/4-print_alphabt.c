#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Print the alphabet.
 * exclude e and q from it.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'e')
			continue;
		else if (a == 'q')
			continue;
		else
			putchar(a);
	}

	putchar('\n');
	return (0);
}
