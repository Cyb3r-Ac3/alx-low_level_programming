#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowwercase
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char b;

	while (count++ <= 9)
	{
		for (b = 'a'; b <= 'z'; b++)
			_putchar(b);
		_putchar('\n');
	}
}
