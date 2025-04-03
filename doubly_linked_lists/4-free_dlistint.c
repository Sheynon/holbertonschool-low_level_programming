#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Function to free the memory of a list
 * @head: pointer to the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
