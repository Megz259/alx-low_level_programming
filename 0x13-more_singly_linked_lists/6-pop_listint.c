#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head of a node of a linked list
 * @head: head of linked list
 *
 * Return: 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp;

	if (!head)
		return (0);
	if (!*head)
		return (0);

	i = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (i);
}
