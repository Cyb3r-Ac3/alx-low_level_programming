#include "main.h"

/**
 * _memcpy - function copies @n bytes from memery area @src
 *           to my memory area @dest
 * @n: function copies
 * @src: bytes from memory area
 * @dest: to memeory area
 * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k = 0;

	while (k < n)
	{
		dest[k] = src[k];
		k++;
	}

	return (dest);
}
