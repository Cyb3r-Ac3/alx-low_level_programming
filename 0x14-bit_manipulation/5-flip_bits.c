#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 *
 * @n: the first number
 *
 * @m: the second number
 *
 * Return: the number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned long int current = n ^ m;
	int f, count = 0;

	for (f = 63; f >= 0; f--)
	{
		result = current >> f;
		if (result & 1)
			count++;
	}

	return (count);
}
