#include "main.h"

int string_checker(char *s1, char *s2, int i, int j);

/**
 * wildcmp - check if string could be considered identical
 * @s1: base address for string
 * @s2: base address for string
 * Return: 1 if considered identical
 */
int wildcmp(char *s1, char *s2)
{
	return (string_checker(s1, s2, 0, 0));
}

/**
 * string_checker - check if two strings are identical
 * @s1: string_1 base address
 * @s2: string_2 base address
 * @i: left index
 * @j: joker index (special)
 * Return: 1 if s is palindrome, 0 otherwise
 */
int string_checker(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (string_checker(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (string_checker(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (string_checker(s1, s2, i + 1, j) ||
				string_checker(s1, s2, i, j + 1));
	return (0);
}
