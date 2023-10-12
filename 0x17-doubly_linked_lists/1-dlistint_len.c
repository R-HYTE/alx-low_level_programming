#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: Pointer to the head of the doubly linked list
 * Return: NUmber of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_of_elements = 0;

	while (h != NULL)
	{
		num_of_elements++;
		h = h->next;
	}
	return (num_of_elements);
}
