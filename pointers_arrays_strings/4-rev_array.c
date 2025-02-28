#include "main.h"

/**
 * reverse_array - Function to execute in the program
 * @a: First integrer
 * @n: Second integrer
 *
 * Description: Function that reverse the content of an array of integrers
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
