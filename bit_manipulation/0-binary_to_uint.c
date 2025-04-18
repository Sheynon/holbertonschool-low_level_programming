#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A string containing the binary number.
 *
 * Return: The converted number, or 0 if b is NULL or contains non-binary char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num = (num << 1) | (b[i] - '0');
	}

	return (num);
}
