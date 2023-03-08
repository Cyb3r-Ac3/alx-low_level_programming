#include "main.h"
/**
 * wildcmp - compare two strings and returns 1 if the strings can be considered identical
 * @s1: first string to compare
 * @s2: second string to compare (can contain * as a special character)
 *
 * Return: 1 if s1 and s2  can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*s1 == '\0')
		{
			return (wildcmp(s1, s2 +));
		}
		else
		{
			return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
		}
	}
	else if (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (1);
		}
		else
		{
			return (wildcmp(s1 + 1, s2 + 1));
		}
	}
	else
	{
		return (0);
	}
}
