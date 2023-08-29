#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees memory location for the list
 * @head: pointer to a pointer to the first node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head != NULL || *head == NULL)
	{
		printf("(nil)\n");
		return;
	}

	current = *head;
	while (current != NULL)
	{
		next = current->next; /*Save next pointer*/
		free(current); /*Free the current node*/
		current = next; /*Move to the next node*/
	}

	*head = NULL; /*Set the head pointer to NULL to indicate empty list*/
}
