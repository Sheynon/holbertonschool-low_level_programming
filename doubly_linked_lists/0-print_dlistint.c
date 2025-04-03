#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - function to prints all elements of a double list
 * @h: pointer to the list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
