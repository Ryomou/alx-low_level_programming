#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at end of the linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element otherwise NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	last = malloc(sizeof(list_t));
	if (!last)
		return (NULL);

	last->str = strdup(str);
	last->len = len;
	last->next = NULL;

	if (*head == NULL)
	{
		*head = last;
		return (last);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = last;

	return (last);
}

