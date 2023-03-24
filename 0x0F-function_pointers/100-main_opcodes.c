#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_opcodes - prints the opcodes of a fucntion
 * @start: a pointer to the start of the function's opcodes
 * @n_bytes: the number of opcodes to print
 *
 * Return: void
 */
void print_opcodes(unsigned char *start, int n_bytes)
{
	int i;

	for (i = 0; i < n_bytes; i++)
	{
		printf("%02x", *(start + i));
	}
	printf("\n");
}

/**
 * main - prints its own opcodes
 * @argc: the number of command line arguments
 * @argv: an array of strings containing the arguments
 *
 * Return: 0 on success, 1 if the number of arguments is incorrect
 *         2 if the number of bytes is negative
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int n_bytes = atoi(argv[1]);

	if (n_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char *start = (unsigned char *) &main;

	print_opcodes(start, n_bytes);
	return (0);
}
