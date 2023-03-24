#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 *
 * @n: the number of parameters
 * @...: the parameters to sum
 *
 * Return: the sum of all parameters, or 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		sum += va_args(args, int);
	}

	va_ends(args);

	return (sum);
}
