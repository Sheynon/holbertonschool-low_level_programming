#include "main.h"
#include <stdlib.h>
/**
 * create_array - function to execute in the program
 * @c: Integrer
 * @size: unsigned integrer
 *
 * Return: return NULL if size = 0
 * return a pointer to the array or NULL if it fail
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
