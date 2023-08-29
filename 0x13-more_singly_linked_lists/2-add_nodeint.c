#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of the list
 * @head: pointer to the pointer to the head node
 * @n: value being added to the new node
 * Return: address of the new node or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	new_node->n = n;
	new_node->next = (*head);

	(*head) = new_node;

	return (*head);
}
