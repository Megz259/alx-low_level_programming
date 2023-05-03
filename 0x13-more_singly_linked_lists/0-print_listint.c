#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * listint - singly linked list
 * @h: singly linked list of listint to print
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	printf("/n h =>");
	while (h != NULL)
	{
		printf("%d", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
