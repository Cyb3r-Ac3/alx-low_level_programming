#include "main.h"

/**
 * binary_to_unit - converts a binary number to an unsigned
 * int
 * @b: pointer to a string of 0
 * Return: the converted number, or 0 if there is one or
 *         more chars in the string that is not '0' or '1',
 *         or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int l = 1;
	unsigned int k = 0;
	int c;
	unsigned int len;

	len = strlen(b);

	for (c = len-1; c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
		if (b[c] == '1')
		{
			k += l;
		}

		l *= 2;
	}

	return (l);
}
