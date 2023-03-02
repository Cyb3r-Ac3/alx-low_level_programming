#include "main.h"

/**
 * string_toupper - change lowercase letters of a string to uppercase
 * @s: string
 * Return: char
 */

char *string_toupper(char *s)
{
	int o;

	o = 0;

	while (*(s + o))
	{
		if (*(s + o) >= 'a' && *(s + o) <= 'z')
			*(s + o) -= 'a' - 'A';
		o++;
	}
	return (s);
}
