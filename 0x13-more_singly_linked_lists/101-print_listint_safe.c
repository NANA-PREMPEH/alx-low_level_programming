#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp(listp_t **head)
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
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	listp_t *hptrr, *newNod, *addNod;

	hptrr = NULL;
	while (head != NULL)
	{
		newNod = malloc(sizeof(listp_t));

		if (newNod == NULL)
			exit(98);

		newNod->p = (void *)head;
		newNod->next = hptrr;
		hptrr = newNod;

		addNod = hptrr;

		while (addNod->next != NULL)
		{
			addNod = addNod->next;
			if (head == addNod->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptrr);
				return (nodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}

	free_listp(&hptrr);
	return (nodes);
}
