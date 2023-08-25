#include "lists.h"


/**
 * free_list - function that frees a linked list
 * @head: parameter to be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

