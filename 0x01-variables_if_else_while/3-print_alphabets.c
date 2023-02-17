#include <stdio.h>
/**
* main - A program that prints the alphabet in lowercase then in uppercase
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char c;

	char d;

	c = 'a';
	d = 'A';
	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	while
		(d <= 'Z') {
			putchar(d);
			c++;
		}
	putchar('\n');
	return (0);
}
