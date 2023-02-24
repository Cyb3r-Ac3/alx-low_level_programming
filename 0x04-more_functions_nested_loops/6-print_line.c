#include "main.h"

/**
 * print_line - printing lines
 * @n: number of times
 *
 * Return: void
 */


void print_line(int n)
{
	int y;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (y = 0; y < n; y++)
			_putchar(95);
		_putchar('\n');
	}
}
