#include "main.h"

/**
 * factorial - Function to execute in the program
 * @n: First Integrer
 *
 * Description: Function that returns the factorial
 * of a given number
 *
 * Return: Return "-1" if "n" is lower than "0"
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return(1);

	return (n * factorial(n - 1));
}
