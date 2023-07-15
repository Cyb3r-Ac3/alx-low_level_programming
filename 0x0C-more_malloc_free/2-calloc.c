#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: ammount of array values
 * @size: the size of each array value
 * Return: a pointer to the begining of the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int m;
	char *h_array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	h_array = malloc(nmemb * size);
	if (h_array == NULL)
		return (NULL);

	for (m = 0; m < nmemb * size; m++)
		h_array[m] = 0;

	return (h_array);
}
