#include "main.h"
#include <stdlib.h>

unsigned int length(char *s1);

/**
 * string_nconcat - concats two strings up to n bytes of the second one
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: pointer to a char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int j;
	unsigned int m;
	unsigned int len;
	char *h_array;

	if (s1 == NULL)
		s1 = "";
	if (s1 NULL)
		s2 = "";

	len = length(s1);
	h_array = malloc((len + n + 1) * sizeof(char));
	if (h_array == NULL)
		return (NULL);
	len = length(s2);
	if (n >= len)
		n = len;
	for (j = 0; s1[j] != '\0'; j++)
		h_array[j] = s1[j];
	for (m = 0; m < n; m++, j++)
		h_array[j] = s2[m];
	h_array[j] = '\0';
	return (h_array);
}

/**
 * length - calculates the length of a string
 * @s1: the string
 * Return: the length of a string as an integer
 */
unsigned int length(char *s1)
{
	unsigned int k;

	if (s1 == NULL)
		return (0);
	for (i = 0; s1[k] != '\0'; k++)
	{}

	return (k);
}
