#include "main.h"

/**
 * _isalpha - Function to check alphabetic character
 * @c: The character to check
 *
 * Description: Return 1 if the var is a letter (lowercase or uppercase)
 * Return 0 if the var anything else.
 *
 * Return: 1 when the if is true 0 when the if is false.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else 
		return (0);
}

