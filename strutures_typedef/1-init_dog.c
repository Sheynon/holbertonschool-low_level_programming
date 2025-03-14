#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Function to execute in the program
 * @d: Structure
 * @name: First String
 * @age: First Integrer
 * @owner: Second String
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
