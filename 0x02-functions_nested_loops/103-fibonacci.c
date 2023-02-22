#include <stdio.h>

/**
 * main - prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long fib3 = 0, fib4 = 1, fibsum;
	float tot_sum;

	while (1)
	{
		fibsum = fib3 + fib4;
		if (fibsum > 4000000)
			break;
		if ((fibsum % 2) == 0)
			tot_sum += fibsum;

		fib3 = fib4;
		fib4 = fibsum;
	}
	printf("%.0f\n", tot_sum);

	return (0);
}
