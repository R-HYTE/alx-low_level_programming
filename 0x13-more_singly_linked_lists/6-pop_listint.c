#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: pointer to pointer to the head node
 * Return: head node's data(n) and  0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *new_head;

	/*check if head or *head is NULL*/
	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	new_head = (*head)->next;
	free(*head); /*Free memory of the current code*/
	*head = new_head; /*Update head pointer to point to new head*/

	return (n);


}
