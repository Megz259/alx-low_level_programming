#include "hash_tables.h"

/**
 * hash_table_get - gets value of key
 * @ht: pointer to table
 * @key: key of hash table
 *
 * Return: value or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *buck;

	if (!ht)
		return (NULL);

	if (!key)
		return (NULL);

	if (!*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	buck = ht->array[index];

	while (buck)
	{
		if (!strcmp(key, buck->key))
			return (buck->value);
		buck = buck->next;
	}
	return (NULL);
}
