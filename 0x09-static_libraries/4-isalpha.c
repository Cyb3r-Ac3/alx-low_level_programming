#include "main.h"

/**
 * _isalpha - checks if a character is alphabetic.
 * @g: the character to be checked.
 *
 * Return: 1 if character is letter, lower or uppercase, 0 otherwise
 */

int _isalpha(int g)
{
	if ((g >= 'a' && g <= 'z') ||
		(g >= 'A' && g <= 'Z'))
		return (1);
	else
		return (0);
}
