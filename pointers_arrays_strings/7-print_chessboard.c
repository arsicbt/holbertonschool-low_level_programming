#include "main.h"
/**
 * print_chessboard - Prints an 8x8 chessboard
 * @a: Pointer to a 2D array of 8 characters per row (representing the board)
 *
 * Return: void
 **/
void print_chessboard(char (*a)[8])
{
	unsigned char line;
	unsigned char col;

	for (line = 0; line < 8; line++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[line][col]);
		}
		_putchar('\n');
	}
}
