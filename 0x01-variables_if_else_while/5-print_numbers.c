#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting with 0
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		printf("%d", a);
	putchar('\n');
	return (0);
}
