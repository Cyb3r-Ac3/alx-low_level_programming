#include "list.h"

/**
 * add_nodeint - Adds a new node to the beginning of a linked list.
 *
 * @head: Pointer to a pointer to the head node of the list.
 * @n: Integer value to store in the new node.
 *
 * Return: Address of the newly added node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
