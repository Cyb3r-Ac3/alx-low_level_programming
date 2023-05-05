#include "main.h"
/**
 * get_endianness - checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int g = 1;
	char *p = (char *)&g;

	return ((int)*p);
}
