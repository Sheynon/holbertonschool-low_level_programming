#include "main.h"

/**
 * _memcpy - Function to execute in the program
 * @dest: First Integrer
 * @src: Second Integrer
 * @n: Third Integrer
 *
 * Description: Function that copies memory area
 *
 * Return: return the content of "dest"
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
