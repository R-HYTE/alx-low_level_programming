#include "lists.h"

/**
 * add_node - func that adds a node at the beginning of a list
 * @head: pointer to head which is also a pointer
 * @str: string we want to insert to
 * Return: pointer to the first node, NULL otherwise
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->next = *head;
	new_node->str = strdup(str);
	new_node->len = len;
	*head = new_node;

	return (*head);
}
