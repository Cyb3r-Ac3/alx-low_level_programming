#include <stdio.h>

/**
 * main - prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int cnt;
	unsigned long fib6 = 0, fib7 = 1, sum;

	for (cnt = 0; cnt < 50; cnt++)
	{
		sum = fib6 + fib7;
		printf("%lu", sum);

		fib6 = fib7;
		fib7 = sum;

		if (cnt == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
