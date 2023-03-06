#include "main.h"

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix colum
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int e, f, g, h = 0, r = 0;

	for (e = 0; e < size; e++)
	{
		g = (e * size) + e;
		h += *(a + g);
	}
	for (f = 0; f < size; f++)
	{
		g = (f * size) + (size - 1 - f);
		r += *(a + g);
	}
	printf("%i, %i\n", h, r);
}
