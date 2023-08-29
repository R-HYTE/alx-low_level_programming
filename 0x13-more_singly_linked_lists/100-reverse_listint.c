#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the pointer to the first node in the list
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next; /*Stores the next node*/
		(*head)->next = prev; /*Reverses the link*/
		prev = (*head); /*move prev to the current node*/
		(*head) = next; /*Move current to the next node*/
	}

	*head = prev; /*Update the head pointer to the new first node*/

	return (*head);
}

