#include <stdlib.h>
#include "lists.h"

/**
 *free_list - free linked list
 *@head: pointer to be freed
 */

void free_list(list_t *head)
{
	list_t *temp;
	
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
