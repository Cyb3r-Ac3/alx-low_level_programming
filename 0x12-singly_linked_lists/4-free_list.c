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
	lisst_t *temp;

	while (head != NULL)
	{
		temp = head;
		haed = head->next;
		free(temp->str);
		free(temp);
	}
}
