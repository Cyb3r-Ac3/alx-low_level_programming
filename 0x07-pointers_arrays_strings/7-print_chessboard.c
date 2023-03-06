#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to pieces to print
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int k, l;

	for (k = 0; k < 8; k++)
	{
		for (l = 0; l < 8; l++)
		{
			putchar(a[k][l]);
		}
		putchar('\n');
	}
}
