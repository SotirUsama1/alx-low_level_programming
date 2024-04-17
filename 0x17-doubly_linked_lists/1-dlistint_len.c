#include "lists.h"

/*
* dlistint_len - return list length
* 
* @h: node pointer to the head of the list
*
* return: length of the list
*/

size_t dlistint_len(const dlistint_t* h)
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
