#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @src: the source of strings
 * @dest: the destination of the string
 * @n: the length of int
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int j;

	for (j = 0; j < n && *(src + j); j++)
	{
		*(dest + j) = *(src + j);
	}
	for (; j < n; j++)
	{
	*(dest + j) = '\0';
	}
	return (dest);
}
