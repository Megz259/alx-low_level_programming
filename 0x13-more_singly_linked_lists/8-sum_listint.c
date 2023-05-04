#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sum of all data of a linked list
 * @head: pointer to linked list
 *
 * Return: sum of linked list, or0 if empty
 */

int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *temp = head;

	while (temp)
	{
		i += temp->n;
		temp = temp->next;
	}
	return (i);
}
