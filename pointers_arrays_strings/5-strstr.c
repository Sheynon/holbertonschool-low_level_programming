#include "main.h"
#include <stddef.h>

/**
 * _strstr - Function to execute in the program
 * @haystack: First integrer
 * @needle: Second integrer
 *
 * Description: Function that locates a substring
 *
 * Return: return the content of "hayback" of NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (!*needle)
		return (haystack);

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}

		if (!*n)
			return (haystack);

		haystack++;
	}
	return (NULL);
}
