#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t.
 * @h: Pointer to list_t.
 *
 * Return: Count of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
