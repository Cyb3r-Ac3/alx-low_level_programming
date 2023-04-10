#include "main.h"
/**
 * flip_bits - returns the number f bits you would need to flip
 *             to get from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the nmber of bits that needs to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count, xor_result;
	unsigned int val, l;

	val = 0;
	xor_result = 1;
	count = n ^ m;

	for (l = o; l < (sizeof(unsigned long int) * 8); l++)
	{
		if (xor_result == (count & xor_result))
			val++;
		xor_result <<= 1;
	}

	return (val);
}
