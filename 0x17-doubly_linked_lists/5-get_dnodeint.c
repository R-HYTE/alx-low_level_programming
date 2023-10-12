#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: Pointer to the head of the doubly linked list
 * @index: Index of the node from 0
 *
 * Return: The nth node (Success),
 * NULL (Otherwise)
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i;
	dlistint_t *current = head;

	for (i = 0; i < index && current != NULL; i++)
	{
		current = current->next;
	}

	return (current);
}

