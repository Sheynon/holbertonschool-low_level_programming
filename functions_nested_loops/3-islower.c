#include "main.h"

/**
 * _islower - Entry point of the program
 *
 * Description: Function than return 1 if the if is true
 * And 0 if the if is false.
 * Check than the var c in the function is a lowercase or not.
 *
 * Return: Always 1 if the if is true 0 if the if is false
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}
