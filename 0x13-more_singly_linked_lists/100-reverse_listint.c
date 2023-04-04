#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL;
	listint_t *current_node = *head;

	while (current_node != NULL)
	{
		*head = current_node->next;
		current_node->next = prev_node;
		prev_node = current_node;
		current_node = *head;
	}

	*head = prev_node;

	return (*head);
}
