#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node,
 * at a given position in a linked list
 * @head: pointer to the first node in the list
 * @idx: position the new node is added
 * @n: data to be inserted in the new node
 *
 * Return: pointer to the new node, else NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *new;
	listint_t *temp = *head;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		(*head) = new;
		return (new);
	}

	for (count = 0; temp && count < idx; count++)
	{
		if (count == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	free(new); /*Free the new node if instertion fails*/
	return (NULL);
}

