#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two  strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: a pointer to the concatenated string,
 *         or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int k, i, len1, len2, len;
	char *result;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		k = 0;
		while (s1[k++] != '\0')
			len1++;
	}

	len = len1 + len2;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);

	for (k = 0; k < len1; k++)
		result[k] = s1[k];
	for (i = 0; i < len2; i++, k++)
		result[k] = s2[i];
	result[len] = '\0';

	return (result);
}
