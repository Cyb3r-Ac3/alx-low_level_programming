#include "lists.h"
/**
 * print_list - Prints all the elements of a list_t list
 * @h:A pointer to the list_t list
 *
 * Return: the  number of nodes in the list_t list
 */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		if (h->str == NULL || h->len == 0)
			printf("[%d] %s\n", 0, "(nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}

	return (count);
}
