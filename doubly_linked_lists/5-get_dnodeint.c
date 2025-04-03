#include "lists.h"

/**
 * get_dnodeint_at_index - function nth node of a list
 * @head: Pointer to the list
 * @index: index of the node to retrieve
 *
 * Return: Pointer to the nth node, or NULL if it doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);

		head = head->next;
		i++;
	}
	return (NULL);
}
