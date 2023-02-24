#include "main.h"

/**
 * print_diagonal - printing lines diagonally
 * @n: integer
 */

void print_diagonal(int n)
{
	int v, i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (v = 0; v < n; v++)
		{
			for (i = 0; i < v; i++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
