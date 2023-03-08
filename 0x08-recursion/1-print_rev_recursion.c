#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - print a string in reverse using recursion
 * @s: string
 * Return: 0;
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
