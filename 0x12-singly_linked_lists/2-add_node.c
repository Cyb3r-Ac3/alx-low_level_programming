#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to a pointer to the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t a;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strup(str);

	for (a = 0; str[a]; a++)
		;

	new_node->len = a;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
