#include "main.h"
#include <math.h>
#include <stdio.h>

/**
 * is_prime_number - states if number is prime
 * @n: int
 * Return: int
 */

int is_prime_number(int n)
{
	int x;

	if (n <= 1)
	{
		return (0); /* 1 and negative numbers are not prime */
	}
	for (x = 2; x <= sqrt(n); x++)
	{
		if (n % x == 0)
		{
			return (0); /* not a prime number */
		}
	}
	return (1); /* prime number */
}
