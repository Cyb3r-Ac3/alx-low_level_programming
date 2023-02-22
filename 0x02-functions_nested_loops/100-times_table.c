#include "main.h"

/**
 * print_times_table - prints the times table of the input,
 *                     starting with 0
 * @y: the values of the times table to be printed
 */

void print_times_table(int y)
{
	int num, mult, prod;

	if (y >= 0 && y <= 15)
	{
		for (num = 0; num <= y; num++)
		{
			_putchar('0');

			for (mult = 1; mult <= y; mult++)
			{
				_putchar(',');
				_putchar(' ');

				prod = num * mult;

				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(' ');

				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10)) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
