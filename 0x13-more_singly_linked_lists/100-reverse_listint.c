#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre;
	listint_t *nxt;

	pre = NULL;
	nxt = NULL;

	while (*head != NULL)
	{
		nxt = (*head)->next;
		(*head)->next = pre;
		pre = *head;
		*head = nxt;
	}

	*head = pre;
	return (*head);
}
