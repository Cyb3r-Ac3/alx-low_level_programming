#include "main.h"

/**
 * more_numbers - printing more numbers
 * Return: no return
 */

void more_numbers(void)
{
	int w, f;

	for (w = 1; w <= 10; w++)
	{
		for (f = 0; f <= 14; f++)
		{
			if (f >= 10)
				_putchar('1');
				_putchar(f % 10 + '0');
		}

		_putchar('\n');
	}
}
