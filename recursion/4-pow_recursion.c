#include "main.h"

/**
 * _pow_recursion - Function to execute in the program
 * @x: First Integrer
 * @y: Second Integrer
 *
 * Description: Function that return the value of x raised
 * by the power of y
 *
 * Return: return the value of x raised by the power of y.
 * if y is lower that 0 return -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
