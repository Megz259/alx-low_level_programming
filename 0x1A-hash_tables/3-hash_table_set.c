#include "hash_tables.h"

/*
 * hash_table_set - adds elements to hash table
 * @ht: pointer to table
 * @key:key to hash
 * @value: value added to element
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *valuecopy;
	char *keycopy;
	hash_node_t *buck, *new_node;

	if (!ht || !key)
		return (0);

	if (!*key || !value)
		return (0);

	valuecopy = strdup(value);
	if (!valuecopy)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	buck = ht->array[index];

	while (buck)
	{
		if (!strcmp(key, buck->key))
		{
			free(buck->value);
			buck->value = valuecopy;
			return (1);
		}
		buck = buck->next;
	}

	new_node = calloc(1, sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(valuecopy);
		return (0);
	}
	keycopy = strdup(key);
	if (!keycopy)
		return (0);
	new_node->key = keycopy;
	new_node->value = valuecopy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
