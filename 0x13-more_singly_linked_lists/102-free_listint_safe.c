#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp2(listp_t **head)
{
	listp_t *temper;
	listp_t *currt;

	if (head != NULL)
	{
		currt = *head;
		while ((temper = currt) != NULL)
		{
			currt = currt->next;
			free(temper);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	listp_t *hptrr, *new, *add;
	listint_t *currt;

	hptrr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hptrr;
		hptrr = new;

		add = hptrr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hptrr);
				return (nodes);
			}
		}

		currt = *h;
		*h = (*h)->next;
		free(currt);
		nodes++;
	}

	*h = NULL;
	free_listp2(&hptrr);
	return (nodes);
}
