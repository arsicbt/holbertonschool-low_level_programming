#include "main.h"

/**
 * print_square - print a square
 *@n: integer
 * Return: a square
 */
void print_square(int n)
{
	char i;
	char j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
