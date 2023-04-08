#include "main.h"

/**
 * binary_to_unit - converts a binary number to an unsigned
 * int
 * @b: pointer to a string of 0
 * Return: the converted numbers or 0
 *         if there is one or more chars in the string
 */
unsigned int binary_to_unit(const char *b)
{
	if (b == NULL)
	{
		return (0);
	}

	unsigned int result;
	int len;
	int i;

	len = strlen(b);

	for (i = 0; i < len; i++)
	{
		char c = b[i];

		if (c != '0' && c != '1')
		{
			return (0);
		}

		result += (c - '0') * pow(2, len - i - 1);
	}

	return (result);
}
