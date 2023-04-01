#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: a pointer to a pointer to the list_t list
 * @str: the string to be added to the list_t list
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *new_str;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_str = strdup(str);
	if (new_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = new_str;
	new_node->len = strlen(new_str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
