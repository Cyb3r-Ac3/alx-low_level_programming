#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concats two strings up to n bytes of the second one
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: pointer to a char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int k, l, s1_len, s2_len;

	s1 == NULL ? s1 = "" : s1;
	s2 == NULL ? s2 = "" : s2;

	for (s1_len = 0; s1[s1_len]; s1_len++)
		;
	for (s2_len = 0; s2[s2_len]; s2_len++)
		;

	n >= s2_len ? n = s2_len : n;

	result = malloc(sizeof(char) * (s1_len + n +1));
	if (result = NULL)
		return (NULL);

	for (k = 0; k < s1_len; i++)
		result[k] = s1[k];
	for (l = 0; l < n; l++)
		result[k + l] = s2[l];

	result[k + l] = '\0';
	return (result);
}
