#include "lists.h"
#include <stddef.h>
/**
 * sum_listint - Calculates the sum of the integers in a list
 * @head: Pointer to the first element of the list
 * Return: the sum of the values
 */
int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);
	else
		return (sum_listint(head->next) + head->n);
}
