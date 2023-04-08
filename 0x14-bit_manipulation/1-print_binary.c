#include "main.h"
/**
 * print_binary - prints tge binary representation of a number
 * @n: the number to convert
 */
void print_binary(unsigned long int)
{
	/* move a 1 bit to the highest position in
	 * twmporary variable */
	unsigned long int mask;
	mask <<= 63;

	mask = 0;

	while ((n & mask) == 0 && mask != 0)
		mask >>= 1;
	
	while (mask != 0)
	{
		if ((n & mask) != 0)
			putchar('1');
		else
			putchar('0');
		mask >>= 1;
	}
}
