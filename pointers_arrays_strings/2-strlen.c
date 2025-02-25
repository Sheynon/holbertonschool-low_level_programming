#include "main.h"

/**
 * _strlen - Function to execute in the program
 * @s: first integrer
 *
 * Description: Function to return the lenght of a string
 *
 * Return: return the value of 'a' for success
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
