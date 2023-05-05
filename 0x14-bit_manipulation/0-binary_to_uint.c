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
	unsigned int result;
	int k;

	result = 0;
	if (!b)
		return (0);
	for (k = 0; b[k] != '\0'; k++)
	{
		if (b[k] != '0' && b[k] != '1')
			return (0);
	}
	for (k = 0; b[k] != '\0'; k++)
	{
		result <<= 1;
		if (b[k] == '1')
			num += 1;
	}
	return (result);
}
