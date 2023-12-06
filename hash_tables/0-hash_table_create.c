#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 *
 *
 *
 *
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_ht;
	unsigned long int idx;

	my_ht = malloc(sizeof(hash_table_t));
	if (my_ht == NULL)
		return (NULL);

	my_ht->size = size;
	my_ht->array = malloc(sizeof(hash_node_t *) * size);
	if (my_ht->array == NULL)
		return (NULL);

	for (idx = 0; idx < size; idx++)
		my_ht->array[idx] = NULL;

	return (my_ht);

}
