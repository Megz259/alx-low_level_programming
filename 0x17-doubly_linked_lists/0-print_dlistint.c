#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - function that prints all the elements of a dlistint
 * @h: list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t number = 0;

	while(h)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}
	return (number);
}
