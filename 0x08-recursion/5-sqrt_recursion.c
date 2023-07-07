#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: integer to find sqrt
 * Return: natural sqrt or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}

/**
 * check - checks for sqrt
 * @a: int
 * @b: int
 * Return: int
 */
int check(int a, int)
{
	if (a * a == b)
		return (a);
	if (a  * a > b)
		return (-1);
	return (check(a + 1,b));
}
