#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: printed character
 * Return 1 on success or -1 if fail
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
