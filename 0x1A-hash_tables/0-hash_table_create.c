#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int a;
	hash_table_t *hash_t;

	hash_t = malloc(sizeof(hash_table_t));
	if (hash_t == NULL)
		return (NULL);
	hash_t->size = size;
	hash_t->array = malloc(sizeof(list_node *) * size);
	if (hash_t->array == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		hash_t->array[a] = NULL;

	return (hash_t);
}
