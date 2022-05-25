#include "lists.h"
/**
 * add_node - adds a newAdd node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newAdd;
	size_t n_char;

	newAdd = malloc(sizeof(list_t));
	if (newAdd == NULL)
		return (NULL);

	newAdd->str = strdup(str);

	for (n_char = 0; str[n_char]; n_char++)
		;

	newAdd->len = n_char;
	newAdd->next = *head;
	*head = newAdd;

	return (*head);
}
