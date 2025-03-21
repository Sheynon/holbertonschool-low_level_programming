#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Function to print numbers followed by a new line
 * @separator: String
 * @n: Interger
 *
 * Return: Return NULL if separator don't print.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list args;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			return;
		}

		num = va_arg(args, int);

		if (i == n)
		{
			printf("%d", num);
			i++;
		}
		printf("%d%s", num, separator);
	}

	va_end(args);
	printf("\n");
}
