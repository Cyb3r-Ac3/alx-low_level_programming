#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: a pointer to the head node of the list
 *
 * Return: none
 */
void free listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
