#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - function to add node at the begining od a list
 * @head: pointer to the list
 * @str: pointer to a string to add
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len =strlen(str);

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
