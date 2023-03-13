#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the source string
 *
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *copy;
	int k, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
		len++;

	copy = malloc(len + 1);

	if (copy == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < len; k++)
	{
		copy[k] = str[k];
		copy[len] = '\0';
	}

	return (copy);
}

