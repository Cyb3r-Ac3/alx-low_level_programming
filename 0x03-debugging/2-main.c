#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest of 3 integers
 * Return: 0
 */

int main(void)
{
	int d, e, f;
	int largest;

	d = 972;
	e = -98;
	f = 0;

	largest = largest_number(d, e, f);

	printf("%d is the largest number\n", largest);

	return (0);
}
