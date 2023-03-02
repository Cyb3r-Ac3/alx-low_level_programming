#include "main.h"

/**
 * print_number - Prints any integer with putchar
 * @n: Number to prints
 * Return: Nothing
 */

void print_number(int n)
{
	long long int x;

	if (n < 0)
	{
		_putchar('-');
		x = -1LL * n;
	}
	else
	{
		x = n;
	}

	if (x / 10)
		print_number(x / 10);

	_putchar(x % 10 + '0');
}
