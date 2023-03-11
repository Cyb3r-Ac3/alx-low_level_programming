#include "main.h"

/**
 * _strncat - concantates 2 strings
 * @src: the source of strings
 * @dest: the destination of the string
 * @n: the length of int
 *
 * Return:pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int l, m;

	for (l = 0; dest[l] != '\0'; l++)
	{
		continue;
	}
	for (m = 0; src[m] != '\0' && m < n; m++)
	{
		dest[l + m] = src[m];
	}
	dest[l + m] = '\0';
	return (dest);
}
