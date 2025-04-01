#include "lists.h"
#include <stdio.h>

/**
 * print_list - Function to print every element for a list_t
 * @h: pointer to the list
 *
 * Return: Total number of node in the list
 */

size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		node++;
	}

	return (node);
}
