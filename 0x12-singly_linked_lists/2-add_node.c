#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the head of the list
 * @str: string to be added to the list
 *
 * Return: new node (SUCCESS)
 * NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i;

	new_node = malloc(sizeof(list_t));
	if (new_mode == NULL)
		return (NULL);

	new_node->str = stdup(str);
	for (i = 0; str[i]; i++)
		;
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
