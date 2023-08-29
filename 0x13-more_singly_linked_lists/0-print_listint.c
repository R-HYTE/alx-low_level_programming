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
		return (num_of_nodes);
	}
	while (current->next != NULL)
	{
		printf("%d\n", current->n);
		num_of_nodes++;
		current = current->next;
	}
	printf("%d\n", current->n);
	num_of_nodes++;
	return (num_of_nodes);
}
