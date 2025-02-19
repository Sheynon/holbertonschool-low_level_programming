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
	char a = 'a';

	while (a <= 'z')
	{
		if (a == 'e')
		{
			a++;
			continue;			
		}
		else if (a == 'q')
		{
			a++;
			continue;
		}
		else
		{
			putchar(a);
			a++;
		}
	}

	putchar('\n');
	return (0);
}
