#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - x raised to the power of y
 * @x: int
 * @y: int
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	/* Handle the error case */
	if (y < 0)
	{
		return (-1);
	}
	/* Base case: x^0 is 1 */
	if (y == 0)
	{
		return (1);
	}
	/* Recursive case: compute x^(y-1) and multiply it by x */
	return (x * _pow_recursion(x, y - 1));
}
