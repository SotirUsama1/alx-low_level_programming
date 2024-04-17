#include "lists.h"

/**
 * print_dlistint - print list elements
 *
 * @h: pointer to the head of the list
 *
 * Return: number of list's elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (!h)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
