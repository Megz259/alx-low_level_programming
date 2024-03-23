#include "lists.h"

/**
 * free_dlistint - free a dlistint list
 *
 * @head: head of list
 * Return: no return
 */

void free_dlistint(dlistint_t *head)
	(
	 dlistint *temp;

	 if (head != NULL)
	 while (head->prev != NULL)
	 head = head->prev;

	 while ((temp = head) != NULL)
	 {
	 head = head->next;
	 free (temp);
	 }
