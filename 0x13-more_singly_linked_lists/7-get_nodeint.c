#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of list
 * @index: index of the node, starting at 0.
 *
 * Return: pointer to the nth node of the list, or NULL
 * if the nodes does not exit
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = heaad;
	unsigned int k;

	for (k = 0; current != NULL && k < index; k++)
		current = current->next;

	return (current);
}
