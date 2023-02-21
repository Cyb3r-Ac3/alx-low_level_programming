#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @f: the character to be checked
 *
 * Return: 1 if character is lowercase, 0 otherwise
 */
int _islower(int f)
{
	if (f >= 'a' && f <= 'z')
		return (1);
	else
		return (0);
}
