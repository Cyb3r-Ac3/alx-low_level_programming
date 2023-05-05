#include "main.h"

/**
 *  binary_to_uint - converts a binary number to an
 *  unsigned int
 *
 *  @b: pointer to a string containing the binary number
 *
 *  Return: the converted number, or 0 if there is one or
 *  more chars in the string that is not '0' or '1', or if b is null.
 */
unsigned int binary_to_uint(const char *b)
{
	if (!b)
		return (0);

	unsigned int result = 0;
	int j;

	for (i = 0; b[j]; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);

		result <<= 1;
		result += b[j] - '0';
	}

	return (result);
}
