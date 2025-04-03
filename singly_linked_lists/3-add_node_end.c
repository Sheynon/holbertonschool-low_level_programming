#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - function to add node at the end of a list
 * @head: pointer to the list
 * @str: pointer of the string to add in the list
 *
 * Return: return the adress of the new element or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
