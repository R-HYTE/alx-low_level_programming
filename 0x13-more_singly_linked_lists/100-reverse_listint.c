#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the pointer to the first node in the list
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	while (current)
	{
		next = current->next; /*Stores the next node*/
		current->next = prev; /*Reverses the link*/
		prev = current; /*move prev to the current node*/
		current = next; /*Move current to the next node*/
	}

	*head = prev; /*Update the head pointer to the new first node*/

	return (*head);
}

