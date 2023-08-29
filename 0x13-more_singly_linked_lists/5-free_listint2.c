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
	listint_t *next;

	if (head == NULL || *head == NULL)
	{
		printf("(nil)\n");
		return;
	}

	while (*head)
	{
		next = (*head)->next; /*Save next pointer*/
		free(*head); /*Free the current node*/
		(*head) = next; /*Move to the next node*/
	}

	*head = NULL; /*Set the head pointer to NULL to indicate empty list*/
}
