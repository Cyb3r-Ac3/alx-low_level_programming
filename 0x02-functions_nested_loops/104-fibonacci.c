#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0
 */
int main(void)
{
	int cnt;
	unsigned long fib8 = 0, fib9 = 1, sum;
	unsigned long fib8_half1, fib8_half2, fib9_half1, fib9_half2;
	unsigned long half1, half2;

	for (cnt = 0; cnt < 92; cnt++)
	{
		sum = fib8 + fib9;
		printf("%lu, ", sum);

		fib8 = fib9;
		fib9 = sum;
	}

	fib8_half1 = fib8 / 10000000000;
	fib9_half1 = fib9 / 10000000000;
	fib8_half2 = fib8 / 10000000000;
	fib9_half2 = fib9 / 10000000000;

	for (cnt = 93; cnt < 99; cnt++)
	{
		half1 = fib8_half1 + fib9_half1;
		half2 = fib8_half2 + fib9_half2;
		if (fib8_half2 + fib9_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}

		printf("%lu%lu", half1, half2);
		if (cnt != 98)
			printf(", ");

		fib8_half1 = fib9_half1;
		fib8_half2 = fib9_half2;
		fib9_half1 = half1;
		fib9_half2 = half2;
	}
	printf("\n");
	return (0);
}
