#include "main.h"

/**
 * _strcpy - copy the string pointed by src to dest
 * @dest: char to check
 * @src: char to check
 * Return: Always 0 (Success)
 */

char *_strcpy(char *dest, char *src)
{
	int b;

	for (b = 0; src[b] != '\0'; b++)
		dest[b] = src[b];
	dest[b] = '\0';
	return (dest);
}
