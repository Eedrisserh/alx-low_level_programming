#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_chessboard - print a chess board
 * @a: 2D array for chess
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}