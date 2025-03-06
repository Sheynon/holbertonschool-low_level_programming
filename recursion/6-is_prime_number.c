#include "main.h"

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
	int i;

	if (n <= 1)
		return (0);
	else if (i * i > n)
		return (1);
	else if (n % i == 0)
		return (0);

	return (check_prime(n, i + 1));
}
