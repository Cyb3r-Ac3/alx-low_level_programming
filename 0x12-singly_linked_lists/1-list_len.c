#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list
 * @h: A pointer to the list_t list
 *
 * Return: the number of elements in the list_t lit
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
