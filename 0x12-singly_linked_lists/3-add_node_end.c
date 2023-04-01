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
	list_t *new_node, *current;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(new_node->str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;

	current->next = new_node;
	return (new_node);
}
