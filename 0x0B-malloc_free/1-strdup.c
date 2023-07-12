#include "main.h"
#include <stdlib>

/**
 * _strdup - duplicates a  string using malloc
 * @str: String to be duplicated
 * Return: NULL if not enough space in memory otherwise a pointer
 * to the beginning of the array
 */

char *_strdup(char *str)
{
	int len;
	int j;
	char *heap_array;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
	{}
	heap_array = malloc(len + 1);
	if heap_array == NULL
		return (NULL);
	for (j = 0; j < len ; j++)
	{
		heap_array[j] = str[j];
	}
	heap_array[i] = '\0';
	return (heap_array);
}
