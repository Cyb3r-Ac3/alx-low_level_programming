#include <stdlib.h>
#include "function_pinters.h"
/**
 * array_iterator - applies a function to each element of an array
 * @array: pointer to the array
 * @size: size of the array
 * @action: pointer to the function to apply
 *
 * This function applies the function pointed to by 'action' to each element
 * of the array pointed to by 'array', using a loop. The size of the array
 * is given by 'size'.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
