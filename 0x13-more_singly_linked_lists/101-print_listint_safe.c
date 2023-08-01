#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current_node = head;
	const listint_t *prev_node = NULL;

	while (current_node != NULL)
	{
		printf("[%p] %d\n", (void *)current_node, current_node->n);
		count++;

		if (current_node < prev_node)
		{
			printf("-> [%p] %d\n", (void *)current_node, current_node->next->n);
			break;
		}

		prev_node = current_node;
		current_node = current_node->next;
	}

	if (current_node == NULL)
	{
		return (count);
	}

	exit(98);
}
