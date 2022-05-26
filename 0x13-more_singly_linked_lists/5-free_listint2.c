#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *tempra;
	listint_t *currt;

	if (head != NULL)
	{
		currt = *head;
		while ((tempra = currt) != NULL)
		{
			currt = currt->next;
			free(tempra);
		}
		*head = NULL;
	}
}
