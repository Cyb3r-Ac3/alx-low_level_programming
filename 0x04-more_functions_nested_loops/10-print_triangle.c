#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 * @#: used to print triangle
 * If size is 0 or less, the function should print only a new line
 *
 * Return: void
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		int k, l;

		for (k = 1; k <= size; k++)
		{
			for (l = k; l < size; l++)
			{
				_putchar(' ');
			}

			for (l = 1; l <= k; l++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
