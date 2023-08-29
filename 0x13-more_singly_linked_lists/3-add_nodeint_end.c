#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the list
 * @head: pointer to a pointer to the first node
 * @n: integer value being assogned to the new node
 * Return: address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		/*If the list is empty, make the new node the head of the list*/
		*head = new_node;
	}
	else
	{
		listint_t *current = *head;

		/*Traverse the list to find last node*/
		while (current->next != NULL)
		{
			current = current->next;
		}
		/*Update last node's pointer to point the new node*/
		current->next = new_node;
	}
	return (new_node);
}
