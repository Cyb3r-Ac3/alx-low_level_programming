#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from input to 98
 *               in order separated by a comma followed by a space
 * @h: the number to begin counting at
 */
void print_to_98(int h)
{
	if (h >= 98)
	{
		while (h > 98)
			printf("%d, ", h--);
		printf("%d\n", h);
	}

	else
	{
		while (h < 98)
			printf("%d, ", h++);
		printf("%d\n", h);
	}
}
