#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a = 0;

	while (a < 16)
	{
		if (a < 10)
		{
			putchar(a + '0');
			a++;
		}
		else
		{
			putchar(a - 10 + 'a');
			a++;
		}
	}

	putchar('\n');
	return (0);
}
