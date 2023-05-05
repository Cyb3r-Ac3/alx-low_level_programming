#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: the number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	unsigned long int num = _pow(2, sizeof(unsigned long int) * 8 - 1);
	int result = 0;

	while (num > 0)
	{
		if ((n & num) == num)
		{
			_putchar('1');
			print = 1;
		}
		else if (result)
			_putchar('0');

		num >>= 1;
	}
}

/**
 * _pow - calculates (base ^ power)
 *
 * @base: base of the exponent
 *
 * @power: power of the exponent
 *
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int result = 1;
	unsigned int k;

	for (k = 0; k < power; k++)
		result *= base;

	return (result);
}
