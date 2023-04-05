#include "lists.h"
#include <stddef.h>
/**
 * get_nodeint_at_index - gets index node
 * @head: head node
 * @index: index of node
 * Return: node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	for (count = 0; count < index; count++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
