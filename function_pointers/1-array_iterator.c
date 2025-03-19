#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Function to execute in the program
 * @array: Array in the function
 * @size: size of the array
 * @action: action to realize on the array
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
