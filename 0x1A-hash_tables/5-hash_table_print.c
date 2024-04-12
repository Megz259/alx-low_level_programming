#include "hash_tables.h"

/**
 * hash_table_print - prints the key
 * @ht: pointer to table
 *
 * Return:print
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int j = 0;
	hash_node_t *buck;
	int a_b = 0;

	if (!ht)
		return;

	printf("{");
	for (j = 0; j < ht->size; j++)
	{
		buck = ht->array[j];
		while (buck)
		{
			if (a_b)
				printf(",");
			printf("'%s': '%s'", buck->key, buck->value);
			a_b = 1;
			buck = buck->next;
		}
	}
	printf("{n");
}
