#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 * in a doubly linked list
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t number = 0;

	while(h)
	{
		number++;
		h = h->next;
	}
	return (number);
}
