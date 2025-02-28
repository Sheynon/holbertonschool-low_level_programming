#include "main.h"

/**
 * *strncat - Function to execute in the program
 * @dest: Destination integrer
 * @src: Source Integrer
 * @n: Third Integrer
 *
 * Description: Function that concatenate two string for a
 * specific amount of bytes from the source
 *
 * Return: return the content of "dest"
 */

char *_strncar(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (b < n && src[b] !='\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';

	return (dest);
}
