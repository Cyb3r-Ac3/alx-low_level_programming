#include "main.h"

/**
 * _abs - computes the absolut value of an integer
 * @num: the integer to be computed
 *
 * Return: the absolute value of the integer
 */
int _abs(int num)
{
	if (num >= 0)
		return (num);
	else
		return (-num);
}
