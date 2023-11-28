#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements
 * @h: pointer to the list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int nodes;

	for (nodes = 0; h != NULL; h = h->next)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		nodes++;
	}
	return (nodes);
}
