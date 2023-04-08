#include "main.h"

/**
 * get_bit - returns the value  of a bit at a givn index
 * @n: numbeer to get the bit from
 * @index: index of the bit to get
 *
 * Return: value of bit at index or -1 if error occured
 */
int get_bit(unsiged long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
