#include "main.h"

/**
 * is_prime_recursive - Function to execute
 * @n: First Intgrer
 * @i: Second Integrer
 *
 * Description: Function that verify a number in a recursive
 *
 * Return: 1 if it's not a prime number 0 if it is
 */

int is_prime_recursive(int n, int i)
{
	if (n <= 1)
		return (0);
	else if (i * i > n)
		return (1);
	else if (n % i == 0)
		return (0);

	return (is_prime_recursive(n, i + 1));
}
/**
 * is_prime_number - Function to execute in the code
 * @n: First integrer
 *
 * Description: Function that return 1 if the input integrer
 * is a prime number otherwise return 0.
 *
 * Return: return 1 if input integrer is a prime number
 * return 0 otherwise
 */

int is_prime_number(int n)
{
	return (is_prime_recursive(n, 2));
}
