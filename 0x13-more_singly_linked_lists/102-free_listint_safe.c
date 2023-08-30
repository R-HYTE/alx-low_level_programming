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
	listint_t *current, *temp;
	size_t len = 0;

	if (!h || !*h)
		return (0);

	current = (*h);
	while (current)
	{
		len++;
		temp = current->next;

		/*Check for circular reference*/
		if (temp >= current)
		{
			*h = NULL; /*Set the original pointer to NULL to break the reference.*/
			return (len);
		}

		free(current);
		current = temp;
	}

	*h = NULL; /*Set the original pointer to NULL to indicate the list is freed.*/

	return (len);
}

