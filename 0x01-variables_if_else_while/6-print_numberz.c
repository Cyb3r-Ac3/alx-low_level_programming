#include <stdio.h>
/**
 * main - a program that prints all single digit numbers with putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int c;

	c = 0;
	while
		(c < 10) {
			putchar(c + '0');
			c++;
		}
	putchar('\n');
	return (0);
}
