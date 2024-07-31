#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the
 * node at index of a dlistint_t linked list
 * @head: double pointer to the head of the list
 * @index: index of the node that should be deleted, starting from 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

    /* Special case: delete the head node */
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

    /* Traverse the list to find the node at the specified index */
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

    /* If the node does not exist */
	if (current == NULL)
		return (-1);

    /* Adjust the pointers to bypass the node to be deleted */
	if (current->next != NULL)
		current->next->prev = current->prev;

	if (current->prev != NULL)
		current->prev->next = current->next;

    /* Free the memory of the node to be deleted */
	free(current);

	return (1);
}
