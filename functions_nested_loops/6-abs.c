#include "main.h"

/**
 * _abs - Function that compute the absolute value of an integrer
 * @a: integrer to check
 *
 * Description: return the absolute value of the integrer
 *
 * Return: -a if the if is true a if it's false
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	return (a);
}
