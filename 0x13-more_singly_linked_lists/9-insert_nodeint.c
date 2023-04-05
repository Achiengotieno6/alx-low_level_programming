#include "lists.h"
#include <stddef.h>
/**
 * insert_nodeint_at_index - Inserts a node at a given index
 * @head: Pointer to the first element of the list
 * @idx: Index a node will be inserted
 * @n: number to be inserted into the new node
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *n_node, *temp;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);
	n_node->n = n;

	if (idx == 0)
	{
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}
	temp = *head;
	for (a = 1; a < idx; a++)
	{
		if (temp == NULL)
		{
			free(n_node);
			return (NULL);
		}
		temp = temp->next;
	}
	n_node->next = temp->next;
	temp->next = n_node;
	return (n_node);
}
