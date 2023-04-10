#include "main.h"

/**
 * get_bit - returns the value  of a bit at a givn index
 * @n: numbeer to get the bit from
 * @index: index of the bit to get
 *
 * Return: value of bit at index or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int chick, val;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	chick = 1 << index;
	val = n & chick;

	if (val == chick)
		return (1);

	return (0);
}
