#include "lists.h"
/**
* add_dnodeint - add new node at the begining of the list
*
* @head: pointer to the list head node
* @n: integer value for the node
*
* return: if failed return null, else return pointer to the new node
*/
dlistint_t* add_dnodeint(dlistint_t** head, const int n)
{
	dlistint_t* node = malloc(sizeof(dlistint_t));
	node->n = n;
	node->next = *head;
	node->prev = NULL;

	if (*head != NULL)
		(*head)->prev = node;

	*head = node;
	return (head == &node) ? node : NULL;
}
