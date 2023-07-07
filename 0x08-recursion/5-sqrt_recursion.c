#include "main.h"
#include <stdio.h>

int check(int a, int b)

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: integer to find sqrt
 * Return: natural sqrt or -1
 */
int _sqrt_recursion(int n)
{
	int b;

	b = 1;
	b = check(n, b);
	return (b);
}

/**
 * check - checks for sqrt
 * @a: int
 * @b: int
 * Return: int
 */
int check(int a, int b)
{
	if (a < 0)
		return (-1);
	if (b * b == a)
		return (b);
	if (b > a)
		return (-1);
	return (check(a, b + 1));
}
