#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: number to get the bit from
 *
 * @index: index of the bit to get
 *
 * Return: value of bit at index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 63)
		return (-1);

	val = (n >> index) & 1;

	return (val);
}
