#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - adds or updates an element in the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value to add
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *node, *tmp;
    char *value_copy;

    if (!ht || !key || *key == '\0' || !value)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);
    tmp = ht->array[index];

    /* Update if key exists */
    while (tmp)
    {
        if (strcmp(tmp->key, key) == 0)
        {
            free(tmp->value);
            tmp->value = strdup(value);
            if (tmp->value == NULL)
                return (0);
            return (1);
        }
        tmp = tmp->next;
    }

    /* Add new node */
    node = malloc(sizeof(hash_node_t));
    if (node == NULL)
        return (0);

    node->key = strdup(key);
    if (node->key == NULL)
    {
        free(node);
        return (0);
    }

    value_copy = strdup(value);
    if (value_copy == NULL)
    {
        free(node->key);
        free(node);
        return (0);
    }

    node->value = value_copy;
    node->next = ht->array[index];
    ht->array[index] = node;

    return (1);
}
