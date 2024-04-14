#include "lists.h"

/**
 * print_dlistint - print list elements
 *
 * @h: pointer to the head of the list
 *
 * Return: number of list's elements
 */

size_t print_dlistint(const dlistint_t* h);
{
	size_t i = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}


