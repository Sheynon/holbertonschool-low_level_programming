#include "main.h"

/**
 * _strncpy - Funtion to execute in the program
 * @dest: First integrer
 * @src: Second integrer
 * @n: Third integer
 *
 * Description: Function that copy a string
 *
 * Return: Return "dest"
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (src[a] != '\0')
	{
		dest[b] = src[a];
		a++;
		b++;
	}

	return (dest);
}
