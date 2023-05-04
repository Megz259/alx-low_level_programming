#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at the index of a linked list
 * @head: pointer to the start of a linked list
 * @index: index
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = *head;
	listint_t *working_node = NULL;

	if (head == 0)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (i < index - 1)
	{
		if (!temp)
			return (-1);
		if (!(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}

	working_node = temp->next;
	temp->next = working_node->next;
	free(working_node);
	return (1);
}
