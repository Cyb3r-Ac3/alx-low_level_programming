#include <stdio.h>

/**
 * main - list all the natural numbers below 1024 (excluded)
 *        that are multiples of 3 or 5
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j, sum = 0;

	for (j = 0 j < 1024; j++)
	{
		if ((j % 3) == 0 || (j % 5) == 0)
			sum += j;
	}

	printf("%d\n", sum);

	return (0);
}
