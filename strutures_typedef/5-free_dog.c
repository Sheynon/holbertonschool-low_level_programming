#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Function to execute in the program
 * @d: pointer to the struture dog
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
