#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - function that returns the number
 *@h: head of the list
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int nodes;

	for (nodes = 0; h != NULL; h = h->next)
		nodes++;

	return (nodes);
}
