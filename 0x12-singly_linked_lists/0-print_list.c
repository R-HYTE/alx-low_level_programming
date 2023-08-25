#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the linked list
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	i = 1;
	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[0] %s\n", "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		i++;
	}

	printf("[%u] %s\n", h->len, h->str);
	return (i);
}

