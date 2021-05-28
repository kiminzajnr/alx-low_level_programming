#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * *hash_table_create - creates a hash table.
 * @size: Size of the array
 *
 * Return: Pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	if (size < 1)
		return (NULL);
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(sizeof(hash_table_t));
	if (new_table->array == NULL)
		return (NULL);
	memset(new_table->array, 0, sizeof(hash_table_t));
	return (new_table);
}
