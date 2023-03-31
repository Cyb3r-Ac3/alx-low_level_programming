#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: a pointer to the beginning of a list_t list
 *
 * Description: this function frees each node in the list_t list, starting
 * from the head node
 */
void free_list(list_t *head)
{
	list_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
