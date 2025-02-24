#include "main.h"

/**
 * _isdigit - Function to execute in the program
 * @c: intrgrer to check with the function
 *
 * Description: Function to check if the integrer is a digit
 *
 * Return: return 1 if the integrer in a digit
 * return 0 if the integrer is otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
