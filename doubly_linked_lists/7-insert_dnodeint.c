#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new
 * node at a given position
 * @h: double pointer to the head of the list
 * @idx: index of the list where the new node
 * should be added. Index starts at 0
 * @n: data to insert in the new node
 *
 * Return: the address of the new node,
 * or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

    /* Create the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

    /* Special case: insert at the beginning */
	if (idx == 0)
		return (add_dnodeint(h, n));

    /* Traverse the list to find node before the insertion*/
	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}

    /* If the node not exist or the index is out of bounds*/
	if (current == NULL || (current->next == NULL && (i + 1) != idx))
	{
		free(new_node);
		return (NULL);
	}

    /* Special case: insert at the end */
	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

    /* Adjust the pointers to insert the new node in the middle */
	new_node->next = current->next;
	new_node->prev = current;
	current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
