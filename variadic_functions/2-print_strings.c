#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char *);

		printf("%s", string);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);
	printf("\n");
}
