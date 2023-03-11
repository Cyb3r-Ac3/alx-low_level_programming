#include <stdio.h>
#include <stdlib.h>

/**
 * main -> this is a function to prints its name
 * @argc: argc parameter
 * @argv: an array of a commmand listed
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int result = 0, num, k, l, m;

	for (k = 1; k < argc; k++)
	{
		for (l = 0; argv[k][l] != '\0'; l++)
		{
			if (argv[k][l] > '9' || argv[k][l] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}

	for (m = 1; m < argc; m++)
	{
		num = atoi(argv[m]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
