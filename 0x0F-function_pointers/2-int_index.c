#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: pointer to the integer array
 * @size: size of the array
 * @cmp: pointer to the function to compares values
 *
 * Return: index of the first element of which the cmp function
 * does not return 0, or -1 if no element matches or size is <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
