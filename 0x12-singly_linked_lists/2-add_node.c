#include "lists.h"
#include <string.h>

/**
 * add_node - add a node at the beginning of the list
 *
 * @head: pointer to the head element of the function
 * @str: string variable to add to the element
 *
 * Return: pointer too the new head element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;

	return (*head);
}
