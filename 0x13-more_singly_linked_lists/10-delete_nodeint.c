#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a node at a given index in a linked list
 * @head: pointer to the first node in the list
 * @index: position of the node to delete
 *
 * Return: 1 (Success), or -1 (Failure)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp = *head;
	unsigned int i = 0;

	if (*head == NULL || *head == NULL)
		return (-1); /*List is empty or head is null, return failure*/

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1); /*Index is out of bounds, return failure*/
		temp = temp->next;
		i++;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}

