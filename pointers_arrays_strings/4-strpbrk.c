#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Function to execute in the program
 * @s: First Integrer
 * @accept: Second Integrer
 *
 * Description: Function that searches a string for any
 * of a set bytes
 *
 * Return: return the content of of "s"
 */

char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
	{
		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
