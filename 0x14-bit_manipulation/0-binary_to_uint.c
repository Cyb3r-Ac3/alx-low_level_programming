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
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	/* loop through each character of the string */
	while (*b != '\0')
	{
		/* check if the character is a valid binary digit */
		if (*b != '0' && *b != '1')
			return (0);

		/* add the value of the binary the binary digit to num */
		num = (num << 1) | (*b - '0');

		/* move to the next character in the string */
		b++;
	}

	return (num);
}
