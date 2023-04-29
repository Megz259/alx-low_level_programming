#include <stdlib.h>
#include <string.h>
#include "lists.h"

/*
 * add_node_end - adding a node at the end of a line
 * @head: head
 * @str: string
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_node;
	size_t a;

	last_node = malloc(sizeof(node));
	if (last_node == NULL)
		return (NULL);
	while (str[a])
		a++;
	last_node->str = strdup(str);
	last_node->a = a;
	last_node->next = NULL;
	if (*head == NULL)
	{
		*head = last_node;
		return (last_node);
	}

	while (temp->next)
	temp = temp->next;
	temp->next = last_node;

	return (last_node);
}
