#include "mian.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 * Return: addres of s
 */

char *leet(char *s)
{
	int f, t;
	char a[] = "aAeEoOtTiL";
	char b[] = "4433007711";

	for (f = 0; *(s + f); f++)
	{
		for (t = 0; t <= 9; t++)
		{
			if (a[t] == s[f])
				s[f] = b[t];
		}
	}
	return (s);
}
/* Read The Fucking Manual */

