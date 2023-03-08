#include "main.h"
#include <stdio.h>

/**
 * factorial - factorial of int
 * @n: int
 * Return: int
 */
int factorial(int n)
{
	/* Handle the error case */
	if (n < 0)
	{
		return (-1);
	}
	/* Base case:  factorial of 0 is 1 */
	if (n == 0)
	{
		return (1);
	}
	/* Recursice case: compute the factorial of (n-1) and multiply it by n */
	return (n * factorial(n - 1));
}
