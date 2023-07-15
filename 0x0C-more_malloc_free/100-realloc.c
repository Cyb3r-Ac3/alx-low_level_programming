#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: pointer to the new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int a;
	char *pt;
	char *h_array;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	pt = (char *)ptr;
	h_array = malloc(sizeof(char) * new_size);
	if (h_array == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		for (a = 0; a < old_size; a++)
			h_array[a] = pt[a];
	}
	free(ptr);
	return (h_array);
}
