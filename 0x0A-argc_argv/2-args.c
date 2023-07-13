#include <stdio.h>

/**
 * main -> this is a function to prints its name
 * @argc: argc parameter
 * @argv: an array of a commmand listed
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
