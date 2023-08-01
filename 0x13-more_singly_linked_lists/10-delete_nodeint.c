#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given
 *                           position in a listint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the position of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prev_node, *current_node;

	if (index == 0 && *head != NULL)
	{
		current_node = *head;
		*head = current_node->next;
		free(current_node);
		return (1);
	}

	prev_node = NULL;
	current_node = *head;
	for (i = 0; current_node != NULL && i < index; i++)
	{
		prev_node = current_node;
		current_node = current_node->next;
	}

	if (current_node == NULL && i <= index)
		return (-1);

	prev_node->next = current_node->next;
	free(current_node);

	return (1);
}
