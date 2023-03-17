#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an arrray of integers
 * @min: minimum value (included) in the array
 * @max: maximum value (included) in the array
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max) /* check for valid input */
		return (NULL);

	size = max - min + 1; /* calculate size of array */

	arr = malloc(sizeof(int) * size);  /* allocate memory and check for error */
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++) /* fill array with values from min to max */
		arr[i] = min++;

	return (arr);
}
