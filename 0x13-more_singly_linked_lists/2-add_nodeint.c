#include "lists.h"

/**
 * add_nodeint - add a newnde node at the beginning
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the newnde element. NUll if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnde;

	newnde = malloc(sizeof(listint_t));

	if (newnde == NULL)
		return (NULL);

	newnde->n = n;
	newnde->next = *head;
	*head = newnde;

	return (*head);
}
