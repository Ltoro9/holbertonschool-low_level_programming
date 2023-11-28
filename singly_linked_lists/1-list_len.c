#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that return the number of elements
 * @h: pointer to the list
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
        int nodes;

        for (nodes = 0; h != NULL; h = h->next)
                nodes++;

        return (nodes);
}
