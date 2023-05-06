#include "main.h"
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


/**
 * print_binary - prints the binary representation of a number
 *
 * @n: the number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int num;
	int print = 0;


	num = _pow(2, sizeof(unsigned long int) * 8 - 1);

	while (num != 0)
	{
		if (n & num)
		{
			putchar('1');
			print = 1;
		}
		else if (print)
			putchar('0');
		num >>= 1;
	}
	if (!print)
		putchar('0);
}
