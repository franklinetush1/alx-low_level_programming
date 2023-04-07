#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * hash_pair - Node
 * @key: unique identifier
 * @value: The value corresponding to a key
 * @next: A pointer to the next node
 */
typedef struct hash_pair
{
	char *key;
	char *value;
	struct list_node *next;
} list_node;

/**
 * table - Hash table data structure
 * @size: Size of the array
 * @array: The array
 *
 */
typedef struct table
{
	unsigned long int size;
	list_node **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);

#endif
