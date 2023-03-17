#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements in array
 * @size: size of each element
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0) /* check for zero input */
		return (NULL);

	ptr = malloc(nmemb * size); /* allocate memory and check for error */

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++) /* set memory to zero */
		*((char *)ptr + i) = 0;

	return (ptr);
}
