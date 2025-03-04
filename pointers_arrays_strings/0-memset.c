#include "main.h"

/**
 * _memset - Function to execute in the program
 * @s: First Integrer
 * @b: Second Integrer
 * @n: THird Integrer
 *
 * Description: Function to fills memory with a constant byte.
 *
 * Return: Return the content of "s"
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
