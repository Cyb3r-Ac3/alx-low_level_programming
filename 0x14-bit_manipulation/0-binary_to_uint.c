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
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		val <<= 1;
		val += b[i] - '0';
		i++;
	}
	return (val);
}
