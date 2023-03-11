#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to make change
 *        for an amount of money
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 * Return: 0 if successful, 1 if an error occurred
 */

int main(int argc, char *argv[])
{
	int num, a, result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (a = 0; a < 5 && num >= 0; a++)
	{
		while (num >= coins[a])
		{
			num -= coins[a];
			result++;
		}
	}
	printf("%d\n", result);
	return (0);
}
