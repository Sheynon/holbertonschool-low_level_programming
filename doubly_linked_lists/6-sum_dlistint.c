#include "lists.h"

/**
 * sum_dlistint - function to return the sum of all entry of a list
 * @head: pointer to the list
 *
 * Return: sum of all the entry of a list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
