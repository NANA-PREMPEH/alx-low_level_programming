#include "lists.h"

/**
 * add_nodeint_end - add a newnde node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the newnde element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnde;
	listint_t *temp;

	(void)temp;

	newnde = malloc(sizeof(listint_t));

	if (newnde == NULL)
		return (NULL);

	newnde->n = n;
	newnde->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = newnde;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnde;
	}

	return (*head);
}
