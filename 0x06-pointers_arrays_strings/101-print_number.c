#include "main.h"

/**
 * print_number - Prints any integer with putchar
 * @n: Number to prints
 * Return: Nothing
 */
void print_number(int n)
{
	unsigned int 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	1 = n;

	if (1 / 10)
		print_number(1 / 10);

	_putchar(1 % 10 + '0');
}
