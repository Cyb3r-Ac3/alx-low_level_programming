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
	listint_t *n_node;

	n_node = malloc(sizeof(listint_t));

	if (n_node != NULL)
	{
		n_node->n = new;
		n_node->next = *head;
	}
	
	else
	{
		return (NULL);
	}

	if (*head != NULL)
	{
		n_node->next = *head;
	}

	*head = new_node;
	return (new_node);
}
