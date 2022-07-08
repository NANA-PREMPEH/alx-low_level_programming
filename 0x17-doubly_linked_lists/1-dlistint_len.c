#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a double linked list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counting;

	counting = 0;

	if (h == NULL)
		return (counting);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		counting++;
		h = h->next;
	}

	return (counting);
}
