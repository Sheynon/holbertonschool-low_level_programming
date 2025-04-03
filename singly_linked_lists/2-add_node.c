#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - function to add node at the begining od a list
 * @head: pointer to the list
 * @str: pointer to a string to add
 *
 * Return: Return the adress of new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);

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

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
