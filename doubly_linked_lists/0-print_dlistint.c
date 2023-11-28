#include <stdio.h>
#include "lists.h"

/**
 *print_dlistint - function that prints all the elements of a dlistint_t list.
 *@h: head
 *Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int nodes;

	for (nodes = 0; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		nodes++;
	}
	return (nodes);
}
