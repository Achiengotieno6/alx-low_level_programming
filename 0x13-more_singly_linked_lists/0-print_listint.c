#include "lists.h"
/**
 * print_listint - prints all elements of a list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t counter;

	counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
