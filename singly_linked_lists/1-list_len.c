#include "lists.h"

/**
 * list_len - Function to return the number of elements
 * in a list
 * @h: pointer to the list
 *
 * Return: return the number of elements in a list
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
