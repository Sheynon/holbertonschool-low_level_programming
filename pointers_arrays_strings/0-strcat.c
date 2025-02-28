#include "main.h"

/**
 * _strcat - Function to execute in the program
 * @dest: First integrer
 * @src: Second Integrer
 *
 * Description: Function that concatenate two string
 *
 * Return: return the content of the integrer "dest" after
 * concatenate it with the integrer "src"
 */

char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (src[j] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';

	return (dest);
}
