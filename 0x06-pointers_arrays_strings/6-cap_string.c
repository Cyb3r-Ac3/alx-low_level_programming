#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @s: string
 * Return: address of s
 */

char *cap_string(char *s)
{
	int h = 0, e;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(s + h))
	{
		if (*(s + h) >= 'a' && *(s + h) <= 'z')
		{
			if (h == 0)
				*(s + h) -= 'a' - 'A';
			else
			{
				for (e = 0; e <= 12; e++)
				{
					if (a[e] == *(s + h - 1))
						*(s + h) -= 'a' - 'A';
				}
			}
		}
		h++;
	}
	return (s);
}
