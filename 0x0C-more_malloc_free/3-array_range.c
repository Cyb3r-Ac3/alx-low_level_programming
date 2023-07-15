#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *result;
	int h;

	if (min > max)
		return (NULL);

	result = malloc(sizeof(int) * (max - min + 1));
	if (result == NULL)
		return (NULL);

	for (h = 0; h <= max - min; h++)
		result[h] = min + h;

	return (result);
}
