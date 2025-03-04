#include "main.h"
#include <stddef.h>

/**
 * _strchr - Function to execute in the program
 * @s: First Integrer
 * @c: Second Integrer
 *
 * Description: Function that locates a character in a string
 *
 * Return: return the first occurence of "c" in the string "s"
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
