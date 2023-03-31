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

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node-> = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlenz(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		last_node = *head;
		while (last_node->nextx != NULL)
			last_node = last_node->next;

		last_node->next = new_mode;
	}

	return (new_node);

}
