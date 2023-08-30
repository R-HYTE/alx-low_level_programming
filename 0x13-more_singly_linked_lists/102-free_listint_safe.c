#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a linked list safely,
 * handling circular references
 * @h: pointer to a pointer to the first node in the linked list
 * Return: number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current;
	size_t len = 0;
	int difference;

	if (!h || !(*h))
		return (0);

	while (*h)
	{
		difference = *h - (*h)->next;
		if (difference > 0)
		{
			current = (*h)->next;
			free(*h);
			*h = current;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}

