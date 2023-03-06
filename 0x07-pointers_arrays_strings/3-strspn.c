#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: the initial segmennt
 * @accept: which consist only bytes
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int num = 0, v, g;

	for (v = 0; s[v] != '\0'; v++)
	{
		if (s[v] != 32)
		{
			for (g = 0; accept[g] != '\0'; g++)
			{
				if (s[v] == accept[g])
					num++;
			}
		}
		else
			return (num);
	}
		return (num);

}
