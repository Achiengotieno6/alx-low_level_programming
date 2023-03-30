#include "lists.h"

/**
 * list_len - Calculates the length of a linked list
 * @h: Pointer to the head of the linked list
 * Return: The total amount of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
