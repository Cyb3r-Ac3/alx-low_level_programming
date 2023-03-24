#include <stdarg.h>
#include <stdio.h>
#include "variadic_function.h"

/**
 * print_numbers - function that prints numbers.
 * @n: resepresents the number of arguments
 * @separator: resepresents the seperator b/w the numbers
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		int num = va_args(args, int);

		printf("%d", num);

		if (i < n - 1 && separator !=  NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
