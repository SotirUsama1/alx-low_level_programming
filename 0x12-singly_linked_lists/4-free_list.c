#include "lists.h"

/**
 * free_list - function that frees memory allocated by the list
 *
 * @head: pointer to list's head element
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
