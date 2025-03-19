#include "function_pointers.h"

/**
 * int_index - function to execute in the program
 * @array: Array of the function
 * @size: First Integrer
 * @cmp: Pointer to a function to compare value
 *
 * Return: return the index of the first element for
 * which the cmp function does not return 0.
 * If no element match return -1.
 * If size is inferior or equal to 0 return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
