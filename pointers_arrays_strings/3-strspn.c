#include "main.h"

/**
 * _strspn - Function to execute in the program
 * @s: First Integrer
 * @accept: Second Integrer
 *
 * Description: Function that gets the length of a prefix
 *
 * Return: return the content of "a"
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	char *a;

	while (*s)
	{
		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
				i++;
				break;
			}
		}
		if (!*a)
		{
			return (i);
		}
		s++;
	}
	return (i);
}
