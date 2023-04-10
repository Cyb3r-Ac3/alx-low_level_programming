#include "main.h"
/**
 * _power - calcualtes base and power
 * @base: base of the exponet
 * @pow: power of the exponet
 *
 * Return: value of base and power
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned int k;
	unsigned long int val = 1;

	for (k = 1; k <= pow; k++)
		val *= base;
	return (val);
}

/**
 * print_binary - prints the binary representation of a number
 * @n: num of pretend
 * Return: void
 */
void print_binary(unsigned long int n)
{
	char hug = 0;
	unsigned long int sft, count;

	sft = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (sft != 0)
	{
		count = n & sft;
		if (count == sft)
		{
			hug = 1;
			_putchar('1');
		}
		else if (hug == 1 || sft == 1)
		{
			_putchar('0');
		}
		sft >>= 1;
	}
}
