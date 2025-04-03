#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - function to add node at the beginning of a list
 * @head: Pointer to the list
 * @n: interger to add in the list
 *
 * Return: return the adress of the new element or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);

}
