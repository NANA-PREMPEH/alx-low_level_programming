#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int nde;
	listint_t *h;
	listint_t *currt;

	if (*head == NULL)
		return (0);

	currt = *head;

	nde = currt->n;

	h = currt->next;

	free(currt);

	*head = h;

	return (nde);
}
