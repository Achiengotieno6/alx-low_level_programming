#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at a given position.
 * @head: A double pointer to the head of the doubly linked list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if succeeded, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
		return (-1);
	if (current->next != NULL)
		current->next->prev = current->prev;
	if (current->prev != NULL)
		current->prev->next = current->next;
	free(current);
	return (1);
}
