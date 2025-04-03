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
	char *dup_str;
	int len = 0;

	if (head == NULL || str == NULL)
		return (NULL);

	dup_str = strdup(str);
	if (!dup_str)
		return (NULL);

	while (dup_str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		free(dup_str);
		return (NULL);
	}

	new_node->str = dup_str;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
