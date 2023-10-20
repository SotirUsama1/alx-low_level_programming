#include "lists.h"

/**
 * add_node_end - add a node at the end of the list
 *
 * @head: pointer to the head element of the function
 * @str: string variable to add to the element
 *
 * Return: pointer to the list's head element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);

	node->str = strdup(str);
	node->len = len;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = node;

	return (node);
}
