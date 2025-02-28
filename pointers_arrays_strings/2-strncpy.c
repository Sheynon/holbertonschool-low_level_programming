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
	int a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
