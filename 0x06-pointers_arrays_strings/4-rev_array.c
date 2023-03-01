#include "main.h"

/**
 * reverse_array - reverse content of an array of integers
 * @a: array
 * @n: integer
 * Return: void
 */
void reverse_array(int *a, int n)
{
int k, d;

for (k = 0; (k < (n - 1) / 2); k++)
	{
	d = a[k];
	a[k] = a[n - 1 - k];
	a[n - 1 - k] = d;
	}
}
