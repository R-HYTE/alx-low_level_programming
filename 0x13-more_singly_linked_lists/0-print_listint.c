#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements in the list
 * @h: value in the header pointer
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num_of_nodes = 0;
	const listint_t *current = h;

	if (current == NULL)
	{
		printf("Error\n");
		return (0);
	}
	while (current)
	{
		printf("%d\n", current->n);
		num_of_nodes++;
		current = current->next;
	}
	return (num_of_nodes);
}
