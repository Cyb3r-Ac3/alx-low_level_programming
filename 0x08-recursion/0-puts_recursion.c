#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - print a string
 * @s: string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0') /* base case: end of string */
	{
		putchar('\n'); /* print new line */
		return;
	}

	putchar(*s); /* print current character */
	_puts_recursion(s + 1); /* recursive call for next character */
}
