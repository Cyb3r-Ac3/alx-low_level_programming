#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: a pointer to the beginning of a list_t list
 *
 * Description: this function frees each node in the list_t list, starting
 * from the head node
 */
void free_list(list_t *head)
{
	list_t *current_node = head;
	while (current_node != NULL)
	{
		list_t *next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
}
