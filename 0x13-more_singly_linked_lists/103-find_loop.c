#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p20;
	listint_t *previous;

	p20 = head;
	previous = head;
	while (head && p20 && p20->next)
	{
		head = head->next;
		p20 = p20->next->next;

		if (head == p20)
		{
			head = previous;
			previous =  p20;
			while (1)
			{
				p20 = previous;
				while (p20->next != head && p20->next != previous)
				{
					p20 = p20->next;
				}
				if (p20->next == head)
					break;

				head = head->next;
			}
			return (p20->next);
		}
	}

	return (NULL);
}
