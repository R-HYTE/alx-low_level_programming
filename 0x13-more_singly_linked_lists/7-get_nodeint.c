#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the first node
 * @index: the position of a node
 * Return: NULL if node is NULL, else address of node at given index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int count = 0;

	current = head;
	while (current)
	{
		if (count == index)
		{
			return (current); /*Return the node at given index*/
		}

		current = current->next;
		count++;
	}

	return (NULL); /*Index is out of bounds*/
}
