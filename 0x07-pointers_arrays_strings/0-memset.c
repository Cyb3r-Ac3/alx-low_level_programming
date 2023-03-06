#include "main.h"

/**
 * _memset - funtion fill the first @n bytes of the memory area pointed
 *           to by @s with the costant byte @b
 * @n: bytes of memory area pointed to by @s
 * @s: with the constant byte @b
 * @b: memory pointer
 * Return: a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
		s[j] = b;
		j++;
	}

	return (s);
}
