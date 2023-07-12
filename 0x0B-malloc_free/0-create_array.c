#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates space in memory for an array
 * @size: the size of the array
 * @c: A character to initilize the array
 * Return: A pointer to the space allocated
 */
char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *heap_array;

	if (size == 0)
		return (NULL);
	heap_array = malloc(size);
	if (heap_array == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
	{
		heap_array[j] = c;
	}
	return (heap_array);
}
