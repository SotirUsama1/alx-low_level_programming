#include "lists.h"

/**
 * dlistint_len - return the length of the list
 *
 * @h: pointer to the head of the list
 *
 * Return: number of list's elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	if (!h)
		return (0);
	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
