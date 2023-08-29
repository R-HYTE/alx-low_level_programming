#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints the elements of a listint_t list safely
 * @head: pointer to the first node
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}

	if (count == 0)
		printf("nil\n"); /*Print "nil" if the list is empty*/

	return count;
}

/**
 * free_listint2 - Frees memory location for the list
 * @head: pointer to a pointer to the first node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL || *head == NULL)
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
