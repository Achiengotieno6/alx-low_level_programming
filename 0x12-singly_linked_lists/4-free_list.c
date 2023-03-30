#include "lists.h"
/**
 * free_list - Frees a list of nodes
 * @head: pointer to the first element of the list
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(temp->str);
		free(temp);
	}
}
