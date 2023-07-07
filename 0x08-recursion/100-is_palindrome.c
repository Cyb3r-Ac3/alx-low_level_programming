#include "main.h"

int _strlen_recursion(char *s);
int checkers(char *s, int i, int j);

/**
 * _strlen_recursion - prints the length of a string
 * @s: string to be printed
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * is_palindrome - check if s is palindrome
 * @s: base address of string
 * Return: 1 if n is prime, 0 otherwise
 */
int is_palindrome(char *s)
{
	return (checkers(s, 0, _strlen_recursion(s) - 1));
}

/**
 * checkers - check if s is a palindrome
 * @s: string base
 * @i: left index
 * @j: right index
 * Return: 1 if s is palindrome, 0 otherwise
 */
int checkers(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (checkers(s, i + 1, j - 1));
	else
		return (0);
}
