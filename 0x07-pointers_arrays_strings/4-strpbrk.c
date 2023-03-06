#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: first occurrence in the string
 * @accept: mathes one of the bytes, or @NULL if no such byte
 * Return: a pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int o;

	while (*s)
	{
		for (o = 0; accept[o]; o++)
		{
			if (*s == accept[o])
				return (s);
		}
		s++;
	}
	return (NULL);
}
