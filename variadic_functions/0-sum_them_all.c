#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Count and return the sum of the parameters
 * @n: interger
 *
 * Return: return the sum of all parameters
 * if n = 0 return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);
}
