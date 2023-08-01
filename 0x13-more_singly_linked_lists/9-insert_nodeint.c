#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given
 *                           position in a listint_t linked list
 * @head: pointer to the head of the list
 * @idx: index of the position where the new node should be added
 * @n: data to be stored in the new node
 *
 * Return: address of the new node, or NULL if it failed.
 */
listint_int *insert_nodeint_at_index(listnt_t **head, unsigned int idx, int n)
{
	unsigned int l;
	listint_t *new_node, *prev_node, *current_node;

	/* create a new node and store the data in it */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	prev_node = NULL;
	current_node = *head;
	for (l = 0; current_node != NULL && l < idx; l++)
	{
		prev_node = current_node;
		current_node = current_node->next;
	}

	if (current_node == NULL && l < idx)
	{
		free(new_node);
		return (NULL);
	}

	prev_node->next = new_node;
	new_node->next = current_node;

	return (new_node);
}
