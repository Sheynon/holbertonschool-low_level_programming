#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - FUnction to execute in the program
 * @b: Integrer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
