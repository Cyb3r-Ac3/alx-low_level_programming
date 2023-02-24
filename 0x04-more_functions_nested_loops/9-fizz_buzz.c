#include "main.h"
#include <stdio.h>

/**
 * main - prints the number from 1 to 100, followed by a new line
 *        but for multiples of three prints Fizz instead of number
 *        and for the multiples of five prints Buzz
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int j;

	for (j = 1; j <= 100; j++)
	{
		if (j % 3 == 0 && j % 5 != 0)
		{
			printf(" Fizz");
		} else if (j % 5 == 0 && j % 3 != 0)
		{
			printf(" Buzz");
		} else if (j % 3 == 0 && j % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (j == 1)
		{
			printf("%d", j);
		} else
		{
			printf(" %d", j);
		}
	}
	printf("\n");

	return (0);
}
