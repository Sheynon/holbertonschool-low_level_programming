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
	int a = 0, b;

	while (a <= 8)
	{
		b = a + 1;

		while (b <= 9)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (!(a == 8 && b == 9))
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}

	putchar('\n');
	return (0);
}
