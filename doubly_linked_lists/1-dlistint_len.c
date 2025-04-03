#include "lists.h"

/**
 * dlistint_len - function to count the number of elements in a list
 * @h: pointer to the list
 *
 * Return: number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
