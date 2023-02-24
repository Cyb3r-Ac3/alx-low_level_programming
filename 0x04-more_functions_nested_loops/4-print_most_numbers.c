#include "main.h"

/**
 * print_most_numbers - prints
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int d;

	for (d = 0; d < 10; d++)
	{
		if (d != 2 && d != 4)
			_putchar(d + '0');
	}
	_putchar('\n');
}

