#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @num1: the number in question
 *
 * Return: value of last digit
 */
int print_last_digit(int num1)
{
	int last_digit = num1 % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
