#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - function to delete a node at index of a list
 * @head: pointer to the list
 * @index: index of the fun function
 *
 * Return: 1 if succeed, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		if (head)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (!temp)
		return (-1);

	if (temp->prev)
		temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;

	free(temp);
	return (1);
}
