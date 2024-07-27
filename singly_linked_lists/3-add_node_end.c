#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Double pointer to the list_t list.
 * @str: String to be duplicated and stored in the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;
	char *new_str;
	unsigned int len = 0;

    /* Calculate the length of the string */
	while (str[len] != '\0')
		len++;

    /* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

    /* Duplicate the string */
	new_str = strdup(str);
	if (new_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

    /* Set the values of the new node */
	new_node->str = new_str;
	new_node->len = len;
	new_node->next = NULL;

    /* Add the new node at the end of the list */
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}

	return (new_node);
}
