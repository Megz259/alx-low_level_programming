#include "hash_tables.h"

/**
 * hash_table_delete - free table
 * @ht: pointer to table
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int j = 0;
	hash_node_t *buck;
	hash_node_t *buck_free;

	if (!ht)
		return;

	for (j = 0; j < ht->size; j++)
	{
		buck = ht->array[j];
		while (buck)
		{
			buck_free = buck;
			buck = buck->next;
			if (buck_free->key)
				free(buck_free->key);
			if (buck_free->value)
				free(buck_free->value);
			free(buck_free);
		}
	}
	free(ht->array);
	free(ht);
}
