#include "main.h"

/**
 * _strlen_recursion - Function to execute in the program
 * @s: First Integrer
 *
 * Description: Function to returns the lenght of a string
 *
 * Return: return the lenght of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
