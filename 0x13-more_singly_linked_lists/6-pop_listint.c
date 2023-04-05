#include "lists.h"
#include <stddef.h>

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: address of the list
 * Return: the data of the deleted head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int total = 0;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	total = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (total);
}
