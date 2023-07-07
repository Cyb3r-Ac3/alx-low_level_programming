#include "main.h"

int check(int a, int b);

/**
 * is_prime_number - states if number is prime
 * @n: int
 * Return: int
 */
int is_prime_number(int n)
{
	int d;

	d = 2;
	d = check(n, d);
	return (d);
}


/**
 * check - check if number is prime
 * @a: int
 * @b: int
 * Return: int
 */
int check(int a, int b)
{
	/* it is prime */
	if (a == b)
		return (1);
	/* not prime */
	if (a % b == 0 || a <= 1)
		return (0);

	return (check(a, b + 1));
}
