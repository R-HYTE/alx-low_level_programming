#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a list
 * @head: pointer to the first node
 * Return: 0 if the list is empty, else sum of the values
 */

int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	if (head == NULL)
		return (0);

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
