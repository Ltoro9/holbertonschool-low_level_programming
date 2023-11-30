#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	unsigned int count = 0;

	if (*h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	while (*h != NULL)
	{
		if (count == idx)
		{
			new_node->next = *h;
			new_node->prev = (*h)->prev;
			(*h)->prev = new_node;
			if (idx == 0)
				*h = new_node;
			return (new_node);
		}
		*h = (*h)->next;
		count++;
	}
	free(new_node);
	return (NULL);
}
