#include "main.h"

/**
 * print_cell - Create the matrice
 * @product - product of multiplication
 * @is_first - index 0
 */
void print_cell(int product, int is_first)
{
	if (!is_first)
	{
		_putchar(',');
		_putchar(' ');
	}
	if (product > 10 && !is_first)
	{
		_putchar(' ');
	}
	if (product >= 10)
	{
		_putchar('0' + product / 10);
		_putchar('0' + product % 10);
	}
	else
	{
		_putchar('0' + product);
	}
}

/**
 * times_table - prints the 9 times table, starting from 0
 */
void times_table(void)
{
	int row, col;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			print_cell(row * col, col == 0);
		}
	_putchar('\n');
	}
}

