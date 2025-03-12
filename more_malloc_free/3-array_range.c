#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Function to execute in the program
 * @min: First Integrer
 * @max: First Integrer
 *
 * Return: return NULL if min is superior a max and if
 * malloc fail. Return a pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}
