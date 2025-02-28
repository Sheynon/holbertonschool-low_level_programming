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
	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}

	return (dest);
}
