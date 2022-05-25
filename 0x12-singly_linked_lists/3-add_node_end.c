#include "lists.h"

/**
 * add_node_end - adds a newAdd node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newAdd, *temp;
	size_t n_char;

	newAdd = malloc(sizeof(list_t));
	if (newAdd == NULL)
		return (NULL);

	newAdd->str = strdup(str);

	for (n_char = 0; str[n_char]; n_char++)
		;

	newAdd->len = n_char;
	newAdd->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = newAdd;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newAdd;
	}

	return (*head);
}
