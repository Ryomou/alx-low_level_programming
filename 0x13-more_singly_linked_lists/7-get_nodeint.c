#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at index 
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m = 0;
	listint_t *temp = head;

	while (temp && m < index)
	{
		temp = temp->next;
		m++;
	}

	return (temp ? temp : NULL);
}

