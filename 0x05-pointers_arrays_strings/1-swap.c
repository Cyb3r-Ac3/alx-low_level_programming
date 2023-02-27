#include "main.h"

/**
 * swap_int - swaps the value of int c and int d
 * @c: first int
 * @d: second int
 * Return: always 0 (Success)
 */

void swap_int(int *c, int *d)
{
	int s;

	s = *c;
	*c = *d;
	*d = s;
}
