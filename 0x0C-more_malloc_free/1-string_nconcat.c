#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: First string to be concatenated
 * @s2: Second string to be concatenated
 * @n: Number of bytes of s2 to concatenate
 *
 * Return: Pointer to the newly allocated memory containing the string,
 *         or NULL if memory allocation fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	size_t s1_len = 0, s2_len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len] != '\0')
		s1_len++;

	while (s2[s2_len] != '\0')
		s2_len++;

	if (n >= s2_len)
		n = s2_len;

	result = malloc(s1_len + n + 1);

	if (result == NULL)
		return (NULL);

	for (size_t i = 0; i < s1_len; i++)
		result[i] = s1[i];

	for (size_t i = 0; i < n; i++)
		result[s1_len + i] = s2[i];

	result[s1_len + n] = '\0';

	return (result);
}
