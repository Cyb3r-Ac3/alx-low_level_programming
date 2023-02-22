#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @d: first integer
 * @e: second integer
 * @f: third integer
 * Return: largest number
 */

int largest_number(int d, int e, int f)
{
	int largest;

	if (d > e && d > f)
	{
	largest = d;
	}
	else if (e > f)
	{
	largest = e;
	}
	else
	{
	largest = f;
	}

	return (largest);
}
