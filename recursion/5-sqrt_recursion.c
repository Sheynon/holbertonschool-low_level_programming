#include "main.h"

/**
 * _sqrt_recursion - Function to execute the program
 * @n: First integrer
 *
 * Description: Function that return the natural square
 * root of a number
 *
 * Return: return -1 if n does not have a natural square root
 * return the content of n when it have a natural square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - Second function to help the first
 * @n: First Integrer
 * @i: Second Integrer
 *
 * Description: Function to help the first one
 *
 * Return: return the sqare root of n
 */

int _sqrt_helper(int n, int i)
{
	if (n < 0)
		return (-1);
	else if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);

	return (_sqrt_helper(n, i + 1));
}
