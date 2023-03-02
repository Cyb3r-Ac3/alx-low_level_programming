#include "main.h"
/**
 * rot13 - encodes a string into rot13
 * @s: string to encode
 *
 * Return: address of s
 */

char *rot13(char *s)
{
	int b, v;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (b = 0; *(s + b); b++)
	{
		for (v = 0; v < 52; v++)
		{
			if (a[v] == *(s + b))
			{
				*(s + b) = b[v];
				break;
			}
		}
	}
	return (s);
}
/* doing hard things pay of */
