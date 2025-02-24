#include "main.h"
#include <unistd.h>

/**
 * _isupper - function the program need to execute
 * @c: the integrer the function work with
 *
 * Description: Check if the integrer is an uppercase or not
 *
 * Return: Return 1 if integrer is uppercase
 * return 0 if integrer is otherwise
 */

int _isupper(int c)
{
	for (c = 'A'; c <= 'Z'; c++)
	{
		if (c >= 'A' && c <= 'Z')
			return (1);
	}
	return (0);
}
