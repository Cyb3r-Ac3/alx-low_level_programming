#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: the longer string to search
 * @needle: the first occurence of the substring
 * Return: a pointer beg of substring or @Null if it's not found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int s = 0, r = 0;

	while (haystack[s])
	{
		while (needle[r] && (haystack[s] == needle[0]))
		{
			if (haystack[s + r] == needle[r])
				r++;
			else
				break;
		}
		if (needle[r])
		{
			s++;
			r = 0;
		}
		else
			return (haystack + s);
	}
	return (0);
}
