#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		/* if n is negative, return1 */
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		/* base cases */
		return (n);
	}
	else
	{
		/* recursive case */
		return (_sqrt_helper(n, 1, n));
	}
}

/**
 * _sqrt_helper - that takes three integers n, start, and end
 *                as inputs and returns the natural square root of n
 * @n: integer to find sqrt of
 * @start: calculate the midpoint
 * @end: search rigth half
 * Return: natural square root or -1
 */
int _sqrt_helper(int n, int start, int end)
{
	if (start <= end)
	{
		int mid = (start + end) / 2; /* calculate midpoint */
		int sqr = mid * mid; /* calculate square of midpoint */

		if (sqr == n)
		{
			return (mid); /* midpoint is the square root */
		}
		else if (sqr > n)
		{
			return (_sqrt_helper(n, start, mid - 1)); /* search left half */
		}
		else
		{
			return (_sqrt_helper(n, mid + 1, end)); /* search right half */
		}
	}
	else
	{
		return (-1); /* natural squre root not found */
	}
}
