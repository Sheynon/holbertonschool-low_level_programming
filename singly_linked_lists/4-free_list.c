#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Function to free a list
 * @head: pointer to the list
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;

		free(temp->str);
		free(temp);
	}
}
