#include "3-calc.h"

/**
 * op_add - Function to addition two integrer
 * @a: First Integrer to addition
 * @b: Second Integrer to addition
 *
 * Return: Return the sum of the two integrer
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function to substract two integrer
 * @a: First Integrer to substract
 * @b: Second Integrer to substract
 *
 * Return: Return the dif of the two integrer
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function to multiply two integrer
 * @a: First integrer to multiply
 * @b: Second integrer to multiply
 *
 * Return: Return the product of the two integrer
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function to divise two integrer
 * @a: First integrer to divide
 * @b: Second integrer to divide
 *
 * Return: Return the result of the divison of the two integrer
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Function to get the modulo of the two integrer
 * @a: First integrer to use for the modulo
 * @b: Second integrer to use for the modulo
 *
 * Return: Return the remainder of the division of the two integrer
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
