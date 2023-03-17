#include "main.h"
#include <stdlib.h>

/**
 * _strlen - calculate and return string length
 * @string: string
 * Return: string length
 */
int _strlen(char *string)
{
	int b;

	for (b = 0; string[b] != '\0'; b++)
		;
	return (b);
}

/**
 * string_nconcat - concatenate s1 and n bytes of s2; return ptr to string
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concat from string 2
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int num, len, a, b;

	num = n;

	if (s1 == NULL) /* account for NULL strings */
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0) /* account for negative n bytes */
		return (NULL);
	if (num >= _strlen(s2)) /* account fo n too big */
		num = strlen(s2);

	len = strlen(s1) + num + 1; /* +1 to account for null pointer */

	p = malloc(sizeof(*p) * len); /* malloc and check for error */
	if (p == NULL)
		return (NULL);

	for (a = 0; s1[a] != '\0'; b++) /* concat */
		p[a] = s1[a];
	for (b = 0; b < num; b++)
		p[a + b] = s2[b];
	p[a + b] = '\0';

	return (p);
}
