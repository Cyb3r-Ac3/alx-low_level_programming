#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: a pointer to a pointer to the list_t list
 * @str: the string to be added to the list_t list
 *
 * Return; the address of a new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_mode, *last_node;
	size_t b;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (b = 0; str[b]; b++)
		;

	new_node->len = b;
	new_node->next = NULL;
	last_node = *head;

	if (*last_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}

	return (new_node);
}
