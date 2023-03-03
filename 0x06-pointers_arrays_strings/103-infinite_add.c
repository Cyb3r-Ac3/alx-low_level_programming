#include "main.h"

/**
 * infinite_add - adds 2 numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer for result
 * @size_r: buffer size
 * Return: address of r or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a, b, c, d, e, f;

	for (a = 0; n1[a]; a++)
		;
	for (b = 0; n2[b]; b++)
		;
	if (a > size_r || b > size_r)
		return (0);

	e = 0;
	for (a -= 1, b -= 1, c = 0; c < size_r - 1; a--, b--, c++)
	{
		f = e;
		if (a >= 0)
			n += n1[a] - '0';
		if (b >= 0)
			n += n2[b] - '0';
		if (a < 0 && b < 0 && f == 0)
		{
			break;
		}
		e = f / 10;
		r[c] = n % 10 + '0';
	}
	r[c] = '\0';
	if (a >= 0 || b >= 0 || e)
		return (0);
	for (c -= 1, d = 0; d < c; c--, d++)
	{
		e = r[c];
		r[c] = r[d];
		r[d] = e;
	}
	return (r);
}
