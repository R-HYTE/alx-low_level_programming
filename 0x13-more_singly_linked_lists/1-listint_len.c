#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - prints the number of elements
 * @h: pointer to the head of list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t num_of_elements = 0;

	num_of_elements = 0;
	while (current)
	{
		num_of_elements++;
		current = current->next;
	}

	return (num_of_elements);
}
