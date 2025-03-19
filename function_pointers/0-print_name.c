#include "function_pointers.h"

/**
 * print_name - Function to execute an other function by
 * it's printer in the program
 * @name: Pointer to a string
 * @f: Pointer to function
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
