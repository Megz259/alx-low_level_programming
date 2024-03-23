#include "lists.h"

/**
 * free_dlistint - free a dlistint list
 *
 * @head: head of list
 * Return: no return
 */

void free_dlistint(dlistint_t *head)
{
	 if (head == NULL)
	 return;

	 while (head->next)
	 {
	 head = head->next;
	 free(head->prev);
	 }
	 free(head);
	 }
