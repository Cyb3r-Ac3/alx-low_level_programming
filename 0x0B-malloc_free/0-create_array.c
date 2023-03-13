#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with
 *                specific char.
 * @size: the size of the array
 * @c: the character to initialize the array with
 * Return: NULL if size = 0, otherwise a pointer to the array,
 *         or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
