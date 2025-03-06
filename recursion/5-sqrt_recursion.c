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
	static int i = 1;

	if (n < 0)
		return (-1);

	else if (i * i == n)
		return (i);

	else if (i * i > n)
		return (-1);

	i++;
	return (_sqrt_recursion(n));
}
