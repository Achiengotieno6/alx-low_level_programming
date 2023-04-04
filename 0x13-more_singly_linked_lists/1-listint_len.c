#include "lists.h"
/**
 * listint_len - retuns the number of elements in a linked list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t counter;

	counter = 0;
	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
