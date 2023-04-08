#include "main.h"
/**
 * print_binary - prints tge binary representation of a number
 * @n: the number to convert
 */
void print_binary(unsigned long int)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) ? '1' : '0');
}
