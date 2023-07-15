#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocating with malloc
 * @b: ammount of bytes that need to be allocated
 * Return: a pointer to a void
 */
void *malloc_checked(unsigned int b)
{
	void *h_array;

	h_array = malloc(b);

	if (h_array == NULL)
		exit(98);

	return (h_array);
}
