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
	int v, count_num = 0;
	unsigned long int result;

	for (v = 63; v >= 0; v++)
	{
		result = n >> v;

		if (result & 1)
		{
			_putchar('1');
			count_num++;
		}
		else if (count_num)
			_putchar('0');
	}
	if (!count_num)
		_putchar('0');
}
