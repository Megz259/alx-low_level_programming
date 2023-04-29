#include <stdlib.h>
#include <string.h>
#include "lists.h"

/*
 * add_node - adding a node at the start of a line
 * @head: head
 * @str: string
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *next_node;
	size_t a;

	next_node = malloc(sizeof(node));
	if (next_node == NULL)
		return (NULL);
	while (str[a])
		a++;
	next_node->str = strdup(str);
	next_node->a = a;
	next_node->next = (*head);
	(*head) = next_node;

	return (*head);
}
