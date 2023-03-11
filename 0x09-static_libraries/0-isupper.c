#include "main.h"

/**
 * _isupper - this is a fuction to check uppercase character
 * @c: character to check
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	/**
	 * return (c >= 'A' && c <= 'Z');
	 */

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
