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
	listint_t *new_node;

	/* Check if head is NULL */
	if (head == NULL);
		return (NULL);

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* Set the data for the new node */
	new_node->n = n;
	new_node->next = *head;

	/* Set the head to the new node */
	*head = new_node;

	/* Return the address of the new element */
	return (ptr);
}
