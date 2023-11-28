#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked dlistint_t list.
 * @h: head of the list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int nodes;

	for (nodes = 0; h != NULL; h = h->next)
		nodes++;

	return (nodes);
}
