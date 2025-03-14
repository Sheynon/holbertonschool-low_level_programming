#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Function to execute in the program
 * @nmemb: First Integrer
 * @size: Second Integrer
 *
 * Return: return NULL when malloc fail or if nmemb or size
 * are 0. return a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return ((void *)ptr);
}
