#include "main.h"

/**
 * print_to_98 - function to print natural number from the integrer
 * @n: integrer to start from
 *
 * Description: Print all the natural number from n until 98
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	printf("\n");
}
